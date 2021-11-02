/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:54:00 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 16:41:58 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie *zs = new Zombie[n];

	for (uint8_t i = 0; i < n; i++)
		zs[i].set_name(name + std::to_string(i));
	return (zs);
}
