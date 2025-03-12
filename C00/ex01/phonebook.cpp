/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:50 by pracksaw          #+#    #+#             */
/*   Updated: 2025/03/12 21:43:54 by pracksaw         ###   ########.fr       */
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

void clearScreenANSI(void) {
	std::cout << "\033[2J\033[1;1H";
}

void printPrompt(void) {
	std::cout << BLUE << "📞 " << GREEN << "PhoneBook" << YELLOW << " 📒 " << MAGENTA << ">> : " << RESET;
}


void exitPhoneBook(void) {
    std::cout << RED << "Exiting Phonebook..." << RESET << std::endl;
	exit(0);
}

int	main(void) {
	PhoneBook	phone_book;
	str		line;

	clearScreenANSI();
	printPrompt();
	while (std::getline(std::cin, line))
	{
		if (line == "ADD")
			std::cout << "ADD" << std::endl;// phone_book.add();
		else if (line == "SEARCH")
			std::cout << "SEARCH" << std::endl;// phone_book.search();
		else if (line == "EXIT")
			exitPhoneBook();
		printPrompt();
	}
	std::cout << std::endl;
	return (0);
}
