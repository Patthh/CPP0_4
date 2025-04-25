/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:28:09 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 01:15:37 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//The colon after the constructor's parameter list signifies the beginning of the member initialization list
HumanA::HumanA(const std::string name, Weapon &weapon) : _weapon(weapon)
{
	this ->_name = name;
	std::cout << this->_name <<" got a " << this->_weapon.getType() << ". 🥖" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " ceased to exist. 💀" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "." << std::endl;
}