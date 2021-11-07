/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:28:54 by agautier          #+#    #+#             */
/*   Updated: 2021/11/07 17:07:59 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"
#include <stdint.h>

/*
**	Default constructor.
*/
Karen::Karen(void)
{
}

/*
**	Default destructor.
*/
Karen::~Karen(void)
{
}

/*
**	Print message corresponding to level.
*/
void	Karen::complain(std::string level)
{
	int8_t	i = -1;
	std::string	s[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void (Karen::*f[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	i += (level == s[0]) * 1
		+ (level == s[1]) * 2
		+ (level == s[2]) * 3
		+ (level == s[3]) * 4;
	if (i >= 0)
		(this->*f[i])();
}

/*
**	Print debug message.
*/
void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. \
I just love it!" << std::endl;
}

/*
**	Print info message.
*/
void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. \
You don’t put enough! \
If you did I would not have to ask for it!" << std::endl;
}

/*
**	Print warning message.
*/
void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming here for years and you just started working here \
last month." << std::endl;
}

/*
**	Print error message.
*/
void	Karen::error(void)
{
	std::cout << "This is unacceptable, \
I want to speak to the manager now." << std::endl;
}
