/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:57:04 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 19:51:14 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

/*
**	Default constructor.
*/
HumanB::HumanB(std::string const &name) : _name(name), _weapon(0)
{
}

/*
**	Default destructor.
*/
HumanB::~HumanB(void)
{
}

/*
**	Display NAME attacks with his WEAPON_TYPE.
*/
void	HumanB::attack(void)
{
	std::cout
		<< this->_name
		<< " attacks with his "
		<< this->_weapon->getType()
		<< std::endl;
}

/*
**	Setter for _weapon.
*/
void	HumanB::setWeapon(Weapon const &weapon)
{
	this->_weapon = &weapon;
}
