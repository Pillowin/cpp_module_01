/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:37:51 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 17:03:06 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	const std::string s = "HI THIS IS BRAIN";
	const std::string *stringPTR = &s;
	const std::string &stringREF = s;

	std::cout << "Address = " << &s << std::endl;
	std::cout << "Address = " << stringPTR << std::endl;
	std::cout << "Address = " << &stringREF << std::endl;

	std::cout << "String = " << *stringPTR << std::endl;
	std::cout << "String = " << stringREF << std::endl;

	return (EXIT_SUCCESS);
}
