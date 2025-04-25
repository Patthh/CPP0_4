/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:45:30 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/25 21:02:00 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
	Zombie stackZombie(YELLOW "Stack" RES);
	stackZombie.announce();
	
	randomChump(CYAN"Chump" RES);
	randomChump(RED"Chungus" RES);

	Zombie *heapZombie = newZombie(GREEN"Heap" RES);
	heapZombie->announce();
	delete heapZombie;
	
	return (0);
}