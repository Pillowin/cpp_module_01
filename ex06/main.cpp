/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:52:57 by agautier          #+#    #+#             */
/*   Updated: 2021/11/07 17:09:29 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Karen.hpp"
#include <cstdlib>

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc == 2)
		karen.complain(std::string (argv[1]));
	return (EXIT_SUCCESS);
}
