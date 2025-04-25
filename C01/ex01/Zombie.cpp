/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:50 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 00:41:39 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Uses default constructor here cause we init value in zombieHorde instead
Zombie::Zombie() 
{
};

Zombie::~Zombie()
{
	std::cout << "💀 Zombie " << _name << " fades into oblivion... 💨" << std::endl;
}

// within the non-static member functions of a class, "this" is a special keyword that acts as a pointer to the current object on which the member function is being called
//setter method (allow code outside the Zombie class to assign a value to the private member _name)
void Zombie::setName(std::string name)
{
	this->_name=name;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
	std::cerr << "A Horde should've had more than 0 Zombies ig(?)" << std::endl;
	return (NULL);
	}
	//Used std::nothrow with new to prevent exceptions and allow a null check.
	Zombie* horde = new (std::nothrow) Zombie[N];
	if (!horde) {
		std::cerr << "Failed to allocate memory for the horde." << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	return (horde);
}
