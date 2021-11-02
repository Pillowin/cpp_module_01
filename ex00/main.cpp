/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:37:51 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 15:51:38 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"

/*
**	
*/
int	main(void)
{
	Zombie z1;
	Zombie z2("Zntoine");

	z1.annonce();
	z2.annonce();

	randomChump("Boooouh");

	try {
		Zombie *z3 = newZombie("Graou");
		z3->annonce();
		delete z3;
	} catch (std::bad_alloc) {
		std::cerr << "Error while allocating Zombie." << std::endl;
	}

	return (EXIT_SUCCESS);
}
