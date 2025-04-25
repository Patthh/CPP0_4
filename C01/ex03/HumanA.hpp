/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:28:07 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 00:51:44 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;

	public:
		//automatically called when an object of a class is created
		HumanA(const std::string name, Weapon &weapon);
		//automatically called when an object of a class is destroy
		~HumanA();
		void attack(void);
};