/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:45:30 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 01:52:04 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 4) 
	{
		std::cerr << "Error:\t Incorrect number of arguments. \nUsage:\t " << argv[0]
				  << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string outfile_name = filename + ".replace";

	// Open input file
	std::ifstream infile(filename.c_str());
	if (!infile.is_open()) 
	{
		std::cerr << "Error: Could not open input file: " << filename << std::endl;
		return (1);
	}

	// Open output file
	std::ofstream outfile(outfile_name.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Could not open output file: " << outfile_name << std::endl;
		infile.close();
		return (1);
	}

	std::string line;
	// Read line by line
	while (std::getline(infile, line)) 
	{
		size_t pos = 0;
		//std::string::npos == value that represents the "not found" condition.
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		// Move past the inserted s2
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();

	std::cout << "File '" << filename << "' has been processed. Result written to '"
			  << outfile_name << "'" << std::endl;

	return (0);
}