/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:54:00 by agautier          #+#    #+#             */
/*   Updated: 2021/11/11 11:58:29 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int n, std::string name) {
	Zombie* zs = new Zombie[n];

	for (int i = 0; i < n; i++)
		zs[i].set_name(name);
	return (zs);
}
