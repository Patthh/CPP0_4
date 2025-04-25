/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:28:05 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 01:19:41 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL) 
{
    std::cout << this->_name << " joined. 🤦" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " ceased to exist. 💀" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void)
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << "." << std::endl;
    else
        std::cout << _name << " has no weapon to attack with! 🥹" << std::endl;
}