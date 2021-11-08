/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:12:25 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 16:47:23 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(std::string const &name = "Unnamed");
		~Zombie(void);
	
		void	annonce(void) const;
		void	set_name(std::string name);

	private:
		std::string	_name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif
