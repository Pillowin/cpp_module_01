/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:12:25 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 15:51:17 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(const std::string name = "Unnamed");
		~Zombie(void);
	
		void		annonce(void);

	private:
		const std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
