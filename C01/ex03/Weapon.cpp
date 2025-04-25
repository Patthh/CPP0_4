/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:27:58 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 01:21:31 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
}

Weapon::~Weapon()
{
	std::cout << this->getType() << " broke. ‼️" << std::endl;
}

//When you declare a member function as const, you're telling the compiler, 
//The function will only read the object's data; it won't change any of the member variables."
std::string Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(const std::string &weapon)
{
	_type = weapon;
}