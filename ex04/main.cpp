/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:37:51 by agautier          #+#    #+#             */
/*   Updated: 2021/11/07 15:18:51 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"
#include <sstream>
#include <cstdlib>
#include <cstdlib>

int	main(int argc, char **argv)
{
	std::ifstream		infile;
	std::ofstream		outfile;
	std::stringstream	ss;
	std::string			str;

	if (argc != 4)
	{
		std::cerr
			<< "Wrong number of argument."
			<< std::endl
			<< "Use : ./replace filename s1 s2"
			<< std::endl;
		return (EXIT_FAILURE);
	}

	if (!*argv[1] || !*argv[2] || !*argv[3])
	{
		std::cerr
			<< "Empty strings are no allowed."
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
		return (EXIT_FAILURE);
	}

	try {
		outfile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
		outfile.open((std::string (argv[1]) + ".replace").c_str());
	} catch (std::ios_base::failure e) {
		std::cerr
			<< "Error while openning file \""
			<< argv[1]
			<< "\": "
			<< e.what()
			<< std::endl;
		infile.close();
		return (EXIT_FAILURE);
	}

	ss << infile.rdbuf();
	str = ss.str();
	while (!str.empty())
	{
		if (!str.compare(0, std::char_traits<char>::length(argv[2]), argv[2]))
		{
			outfile << argv[3];
			str.erase(0, std::char_traits<char>::length(argv[2]));
			continue ;
		}
		outfile << str.at(0);
		str.erase(0, 1);
	}

	infile.close();
	outfile.close();
	return (EXIT_SUCCESS);
}
