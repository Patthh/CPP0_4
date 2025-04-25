/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:50 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/23 23:20:35 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->contacts_amount = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
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
	// throw std::runtime_error("Exit requested");
}

PhoneBook::PhoneBook(const PhoneBook& other) { *this = other; }
PhoneBook& PhoneBook::operator=(const PhoneBook& other) {
	if (this != &other) {
		for (int i = 0; i < 8; ++i)
			contacts[i] = other.contacts[i];
		contacts_amount = other.contacts_amount;
	}
	return *this;
}

void PhoneBook::add() {
	if (contacts_amount == 8) {
		for (int i = 0; i < 7; ++i) {
			contacts[i] = contacts[i + 1];
		}
		contacts_amount = 7;
	}
	contacts[contacts_amount].setFirst_name();
	contacts[contacts_amount].setLast_name();
	contacts[contacts_amount].setNickname();
	contacts[contacts_amount].setPhone_number();
	contacts[contacts_amount].setDarkest_secret();
	contacts_amount++;
}

static std::string truncate(std::string s) {
	if (s.length() > 10)
		return s.substr(0, 9) + ".";
	while (s.length() < 10)
		s.insert(s.begin(), ' ');
	return s;
}

void PhoneBook::search() {
	if (contacts_amount == 0)
	{
		std::cout << RED << "Currently there's no contact on your phonebook ;( try socializing maybe!" << RESET << std::endl;
		return;
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (unsigned int i = 0; i < contacts_amount; ++i) {
		std::cout << "|" << std::setw(10) << i
				  << "|" << truncate(contacts[i].getFirst_name())
				  << "|" << truncate(contacts[i].getLast_name())
				  << "|" << truncate(contacts[i].getNickname())
				  << "|" << std::endl;
	}
	std::cout << "Enter index to display: ";
	std::string input;
	getline(std::cin, input);
	if (input.length() == 1 && isdigit(input[0])) {
		int index = input[0] - '0';
		if (index >= 0 && index < static_cast<int>(contacts_amount))
			contacts[index].print();
		else
			std::cout << RED << "Invalid index!" << RESET << std::endl;
	} else {
		std::cout << RED << "Invalid index!" << RESET << std::endl;
	}
}
