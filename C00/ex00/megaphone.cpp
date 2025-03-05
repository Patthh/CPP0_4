/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:09:09 by pracksaw          #+#    #+#             */
/*   Updated: 2025/03/05 21:52:12 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (int i = 1; i < argc; ++i) 
	{
		std::string arg = argv[i];
		for (size_t i = 0; i < arg.length(); ++i) 
			arg[i] = toupper(arg[i]);
		std::cout << arg;
	}
	std::cout << std::endl;

	return (0);
}
