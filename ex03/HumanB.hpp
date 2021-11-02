/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:12:12 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 19:48:50 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string const &name);
		~HumanB(void);
	
		void	attack(void);
		void	setWeapon(Weapon const &weapon);

	private:
		std::string const	_name;
		Weapon const		*_weapon;
};

#endif
