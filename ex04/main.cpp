/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:37:51 by agautier          #+#    #+#             */
/*   Updated: 2021/11/02 20:19:31 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
	{
		std::cerr
			<< "Wrong number of argument."
			<< std::endl
			<< "Use : ./replace filename s1 s2"
			<< std::endl;
		return (EXIT_FAILURE);
	}

	try {
		infile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
		infile.open(argv[1], std::ifstream::in);
	} catch (std::ios_base::failure e) {
		std::cerr
			<< "Error while openning file \""
			<< argv[1]
			<< "\": "
			<< e.what()
			<< std::endl;
	}

	return (EXIT_SUCCESS);
}
