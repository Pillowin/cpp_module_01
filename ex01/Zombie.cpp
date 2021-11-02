/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:15:55 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 16:43:51 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
**	Default constructor.
*/
Zombie::Zombie(const std::string name) : _name(name)
{
}

/*
**	Default destructor with a debug message.
*/
Zombie::~Zombie(void)
{
	std::cout
		<< "My name is "
		<< this->_name
		<< " and i am destroyed. :("
		<< std::endl;
}

/*
**	Zombie say its name.
*/
void	Zombie::annonce(void)
{
	std::cout
		<< this->_name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}

/*
**	Set zombie name.
*/
void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
