/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:50 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/21 21:36:38 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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

Contact::Contact(const Contact& other) { *this = other; }
Contact& Contact::operator=(const Contact& other) {
	if (this != &other) {
		first_name = other.first_name;
		last_name = other.last_name;
		nickname = other.nickname;
		phone_number = other.phone_number;
		darkest_secret = other.darkest_secret;
	}
	return *this;
}

int Contact::checkPrintable(str s) {
	for (size_t i = 0; i < s.length(); ++i)
		if (!isprint(s[i]))
			return 0;
	return 1;
}

str Contact::getFirst_name() { return first_name; }
str Contact::getLast_name() { return last_name; }
str Contact::getNickname() { return nickname; }
str Contact::getPhone_number() { return phone_number; }
str Contact::getDarkest_secret() { return darkest_secret; }

void Contact::print() {
	std::cout << MAGENTA << "First name: " << first_name << RESET << std::endl;
	std::cout << MAGENTA << "Last name: " << last_name << RESET << std::endl;
	std::cout << MAGENTA << "Nickname: " << nickname << RESET << std::endl;
	std::cout << MAGENTA << "Phone number: " << phone_number << RESET << std::endl;
	std::cout << MAGENTA << "Darkest secret: " << darkest_secret << RESET << std::endl;
}

void Contact::setFirst_name() {
	std::cout << CYAN << "Enter first name    : " << RESET;
	if (!std::getline(std::cin, first_name)) {
		std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
		exit(0);
	}
	while (first_name.empty() || !checkPrintable(first_name)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, first_name)) {
			std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
			exit(0);
		}
	}
}

void Contact::setLast_name() {
	std::cout << CYAN << "Enter last name     : " << RESET;
	if (!std::getline(std::cin, last_name)) {
		std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
		exit(0);
	}
	while (last_name.empty() || !checkPrintable(last_name)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, last_name)) {
			std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
			exit(0);
		}
	}
}

void Contact::setNickname() {
	std::cout << CYAN << "Enter nickname      : " << RESET;
	if (!std::getline(std::cin, nickname)) {
		std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
		exit(0);
	}
	while (nickname.empty() || !checkPrintable(nickname)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, nickname)) {
			std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
			exit(0);
		}
	}
}

void Contact::setPhone_number() {
	std::cout << CYAN << "Enter phone number  : " << RESET;
	if (!std::getline(std::cin, phone_number)) {
		std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
		exit(0);
	}
	while (phone_number.empty() || !checkPrintable(phone_number)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, phone_number)) {
			std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
			exit(0);
		}
	}
}

void Contact::setDarkest_secret() {
	std::cout << CYAN << "Enter darkest secret: " << RESET;
	if (!std::getline(std::cin, darkest_secret)) {
		std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
		exit(0);
	}
	while (darkest_secret.empty() || !checkPrintable(darkest_secret)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, darkest_secret)) {
			std::cout << RED << "\nEOF received. Exiting." << RESET << std::endl;
			exit(0);
		}
	}
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

void PhoneBook::ADD() {
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

void PhoneBook::SEARCH() {
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

int	main(void)
{
	PhoneBook	phonebook;
	str		line;

	phonebook.clearScreenANSI();
	phonebook.printPrompt();
	while (std::getline(std::cin, line))
	{
		if (line == "ADD")
			phonebook.ADD();
		else if (line == "SEARCH")
			phonebook.SEARCH();
		else if (line == "EXIT")
			phonebook.exitPhoneBook();
		else
		 	std::cout << YELLOW << "PLS TYPE IN AVALIABLE COMMAND(s) [ADD, SEARCH or EXIT]" << RESET << std::endl;
		phonebook.printPrompt();
	}
	std::cout << RED << "\nEOF received. Exiting PhoneBook." << RESET << std::endl;
	return (0);
}
