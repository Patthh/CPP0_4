/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:50 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 02:34:47 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << CYA << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RES << std::endl;
}

void Harl::info(void)
{
	std::cout << GRE << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << RES << std::endl;
}

void Harl::warning(void)
{
	std::cout << YEL << "I think I deserve to have some extra bacon for free.\nI've been coming for years, whereas you started working here just last month." << RES << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RES << std::endl;
}

void Harl::complain(std::string level)
{
	// Create a map to associate level strings with member function pointers (like a dictionary) where:
	// Key = A string ("DEBUG", "INFO", etc.).
	// Value = A pointer to Harl’s member function (&Harl::debug, &Harl::info, etc.).
	std::map<std::string, void (Harl::*)(void)> complaints;
	complaints["DEBUG"] = &Harl::debug;
	complaints["INFO"] = &Harl::info;
	complaints["WARNING"] = &Harl::warning;
	complaints["ERROR"] = &Harl::error;

	// Search the complaints map for level and store the result in it.
	// 	Searches the map for the given level (e.g., "WARNING").
	// If found, it->second gives the function pointer (e.g., &Harl::warning).
	// If not found, it == complaints.end()
	std::map<std::string, void (Harl::*)(void)>::iterator it = complaints.find(level);

	// Call the function if the level is valid
	if (it != complaints.end()) {
		(this->*(it->second))();
		//this = A pointer to the current object
		//it->second = The stored function pointer (e.g., &Harl::warning)
		//this->*(...) = Calls that function on the current Harl object.
		//final () executes the function
	} else {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
