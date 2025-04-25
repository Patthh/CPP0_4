/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:45:30 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/23 23:20:15 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	str		line;

	phonebook.clearScreenANSI();
	phonebook.printPrompt();
	while (std::getline(std::cin, line))
	{
		if (line == "ADD")
			phonebook.add();
		else if (line == "SEARCH")
			phonebook.search();
		else if (line == "EXIT")
			phonebook.exitPhoneBook();
		else
		 	std::cout << YELLOW << "PLS TYPE IN AVALIABLE COMMAND(s) [ADD, SEARCH or EXIT]" << RESET << std::endl;
		phonebook.printPrompt();
	}
	// std::cin.clear();
    // std::cout.clear();
	
	std::cout << RED << "\nEOF received. Exiting PhoneBook." << RESET << std::endl;
	return (0);
}
