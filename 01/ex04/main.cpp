/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:27:35 by humartin          #+#    #+#             */
/*   Updated: 2023/01/12 10:51:59 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4 || std::strlen(argv[1]) == 0)
	{
		std::cout << "Arguments' error !" << std :: endl;
		return (1);
	}
	std::string name(argv[1]);
	std:: string s1(argv[2]);
	std:: string s2(argv[3]);

	size_t found(0);

	std::ifstream in;
	std::ofstream out;
	std::stringstream ss;
	std::string s;

	name.append(".replace");

	in.open(argv[1]);
	if (in.fail())
	{
		std::cout << "Fail open file " << std::endl;
		return (1);
	}
	out.open(name, std::ofstream::out);
	if (out.fail())
	{
		std::cout << "Fail open file" << std::endl;
		return (1);
	}
	ss << in.rdbuf();
	s = ss.str();

	while (1)
	{
		found = s.find(s1, found);
		if (found == std::string::npos)
			break;
		else
		{
			s.erase(found, s1.length());
			s.insert(found, s2);
			found += s2.length();
		}
	}
	out << s;
	in.close();
	out.close();
	return (0);
}
