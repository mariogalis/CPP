/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:48:48 by magonzal          #+#    #+#             */
/*   Updated: 2023/07/10 20:05:12 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		ft_replace(std::ifstream &normalFile, std::ofstream &replacedFile, std::string search, std::string replace)
{
	std::string	read;
	std::size_t	pos;
	
	while(std::getline(normalFile, read))
	{
		pos = read.find(search);
		while(pos != std::string::npos) //a static member constant value with the greatest possible value for an element of type size_t.
		{
			read.erase(pos,search.length());
			read.insert(pos, replace);
			pos = read.find(search, pos + replace.length());
		}
		replacedFile << read << std::endl;
	}
	normalFile.close();
	replacedFile.close();
	return(0);
}

int		error(int i)
{
	if (i == 0)
	{
		std::cout << "Wrong number of Arguments" << std::endl;
		return(-1);
	}
	else if(i == 1)
	{
		std::cout << "Empty search/replace string" << std::endl;
		return(-1);
	}
	else
	{
		std::cout << "Cant open file" << std::endl;
		return(-1);
	}
}

int		main(int argc, char *argv[])
{
	std::ifstream normalFile;
	std::ofstream replacedFile;

	std::string file;
	std::string replacefile;
	std::string search;
	std::string replace;
	
	if(argc != 4)
		return(error(0));
	replacefile = file + ".replace";
	file = argv[1];
	search = argv[2];
	replace = argv[3];
	if(search.empty() || replace.empty())
		return(error(1));
	normalFile.open(file);
	replacedFile.open(replacefile);
	if(!normalFile.is_open() || !replacedFile.is_open())
		return(error(2));
	else
		return(ft_replace(normalFile, replacedFile, search, replace));
}