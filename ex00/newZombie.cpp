/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:26:10 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 15:54:53 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
**	Create a zombie, name it and return it.
*/
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
