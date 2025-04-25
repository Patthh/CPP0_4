/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:50 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/25 21:18:24 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//parameterized constructor [uses an initializer list (: _name(name)) to directly initialize the _name attribute with the value passed]
Zombie::Zombie(std::string name) : _name(name) {};

Zombie::~Zombie()
{
	std::cout << "💀 Zombie " << _name << " fades into oblivion... 💨" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
