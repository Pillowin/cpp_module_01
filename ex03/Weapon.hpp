/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:05:57 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 19:49:53 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		Weapon(std::string const &type = "Unknow");
		~Weapon(void);
	
		std::string const	&getType(void) const;
		void				setType(std::string const &type);

	private:
		std::string	_type;
};

#endif
