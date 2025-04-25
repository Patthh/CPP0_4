/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:45:30 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/25 23:59:45 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
	Zombie* horde;
	int zombieAmount = 10;
	int i;

	horde = zombieHorde(zombieAmount, "Horde Member");
	if (horde == 0)
		return (EXIT_FAILURE);
	for (i = 0; i < zombieAmount; ++i)
	{
		std::cout << RED << "Member No :" << i+1 << RES << std::endl;
		horde[i].announce();
	}
	//used to deallocate memory that was allocated with new[]
	delete[] horde;

	horde = zombieHorde(0, "Failed");
	return (0);
}