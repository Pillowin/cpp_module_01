/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:19:47 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 19:46:12 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
**	Default constructor.
*/
Weapon::Weapon(std::string const &type) : _type(type)
{
}

/*
**	Default destructor.
*/
Weapon::~Weapon(void)
{
}

/*
**	Getter for _type.
*/
std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

/*
**	Setter for _type.
*/
void	Weapon::setType(std::string const &type)
{
	this->_type = type;
}
