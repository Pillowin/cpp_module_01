/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:54:00 by agautier          #+#    #+#             */
/*   Updated: 2021/11/07 15:13:34 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <stdint.h>

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie *zs = new Zombie[n];
	std::stringstream	ss;

	for (uint8_t i = 0; i < n; i++)
	{
		ss << name;
		ss << i;
		ss >> name;
		zs[i].set_name(name);
	}
	return (zs);
}
