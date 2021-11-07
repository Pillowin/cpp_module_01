/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:37:51 by agautier          #+#    #+#             */
/*   Updated: 2021/11/07 15:13:48 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"
#include <stdint.h>

/*
**	
*/
int	main(void)
{
	const int	nb = 10;

	try {
		Zombie *zs = zombieHorde(nb, "Bison");
		for (uint8_t i = 0; i < nb; i++)
			zs[i].annonce();
		delete []zs;
	} catch (std::bad_alloc) {
		std::cerr << "Error while allocating Zombie." << std::endl;
	}

	return (EXIT_SUCCESS);
}
