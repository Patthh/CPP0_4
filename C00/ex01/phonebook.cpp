/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:50 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/05 13:42:07 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) {
	this->contacts_amount = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void PhoneBook::clearScreenANSI(void) {
	std::cout << "\033[2J\033[1;1H";
}

void PhoneBook::printPrompt(void) {
	std::cout << BLUE << "📞 " << GREEN << "PhoneBook" << YELLOW << " 📒 " << MAGENTA << ">> : " << RESET;
}


void PhoneBook::exitPhoneBook(void) {
    std::cout << RED << "Exiting Phonebook..." << RESET << std::endl;
	exit(0);
}

int	main(void) {
	PhoneBook	phonebook;
	str		line;

	phonebook.clearScreenANSI();
	phonebook.printPrompt();
	while (std::getline(std::cin, line))
	{
		if (line == "ADD")
			std::cout << "ADD" << std::endl;// phonebook.add();
		else if (line == "SEARCH")
			std::cout << "SEARCH" << std::endl;// phonebook.search();
		else if (line == "EXIT")
			phonebook.exitPhoneBook();
		phonebook.printPrompt();
	}
	std::cout << std::endl;
	return (0);
}
