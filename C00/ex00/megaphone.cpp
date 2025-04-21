/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:09:09 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/21 19:59:22 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

// if (arg.empty()) 
// 	std::cout << "No input provided!";
int main(int argc, char **argv) 
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (int i = 1; i < argc; ++i) 
	{
		std::string arg(argv[i]);
		for (size_t j = 0; j < arg.length(); ++j) 
			arg[j] = std::toupper(static_cast<unsigned char>(arg[j]));
		std::cout << arg;
	}
	std::cout << std::endl;

	return (0);
}
