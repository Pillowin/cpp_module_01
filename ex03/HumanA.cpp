/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:44:26 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 19:45:02 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

/*
**	Default constructor.
*/
HumanA::HumanA(std::string const &name, Weapon const &weapon)
				: _name(name), _weapon(weapon)
{
}

/*
**	Default destructor.
*/
HumanA::~HumanA(void)
{
}

/*
**	Display NAME attacks with his WEAPON_TYPE.
*/
void	HumanA::attack(void)
{
	std::cout
		<< this->_name
		<< " attacks with his "
		<< this->_weapon.getType()
		<< std::endl;
}
