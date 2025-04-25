/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:18:39 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/23 17:20:07 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
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

bool Contact::isValidInput(const std::string& s) {
	if (s.empty())
		return false;

	for (size_t i = 0; i < s.length(); ++i) {
		if (!std::isspace(s[i]))
			return true;
	}
	return false;
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
	std::cout << std::endl;
	std::cout << MAGENTA << "First name     : " << first_name << RESET << std::endl;
	std::cout << MAGENTA << "Last name      : " << last_name << RESET << std::endl;
	std::cout << MAGENTA << "Nickname       : " << nickname << RESET << std::endl;
	std::cout << MAGENTA << "Phone number   : " << phone_number << RESET << std::endl;
	std::cout << MAGENTA << "Darkest secret : " << darkest_secret << RESET << std::endl;
}

void Contact::setFirst_name() {
	std::cout << CYAN << "Enter first name    : " << RESET;
	if (!std::getline(std::cin, first_name)) {
		std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
		return;
	}
	while (!isValidInput(first_name) || !checkPrintable(first_name)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, first_name)) {
			std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
			return;
		}
	}
}

void Contact::setLast_name() {
	std::cout << CYAN << "Enter last name     : " << RESET;
	if (!std::getline(std::cin, last_name)) {
		std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
		return;
	}
	while (!isValidInput(last_name) || !checkPrintable(last_name)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, last_name)) {
			std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
			return;
		}
	}
}

void Contact::setNickname() {
	std::cout << CYAN << "Enter nickname      : " << RESET;
	if (!std::getline(std::cin, nickname)) {
		std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
		return;
	}
	while (!isValidInput(nickname) ||  !checkPrintable(nickname)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, nickname)) {
			std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
			return;
		}
	}
}

void Contact::setPhone_number() {
	std::cout << CYAN << "Enter phone number  : " << RESET;
	if (!std::getline(std::cin, phone_number)) {
		std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
		return;
	}
	while (!isValidInput(phone_number) ||  !checkPrintable(phone_number)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, phone_number)) {
			std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
			return;
		}
	}
}

void Contact::setDarkest_secret() {
	std::cout << CYAN << "Enter darkest secret: " << RESET;
	if (!std::getline(std::cin, darkest_secret)) {
		std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
		return;
	}
	while (!isValidInput(darkest_secret) || !checkPrintable(darkest_secret)) {
		std::cout << "Invalid input. Try again: ";
		if (!std::getline(std::cin, darkest_secret)) {
			std::cout << RED << "\nEOF received. returning." << RESET << std::endl;
			return;
		}
	}
}