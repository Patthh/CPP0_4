/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:28:13 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 01:06:42 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		//automatically called when an object of a class is created
		HumanB(const std::string &name);
		//automatically called when an object of a class is destroy
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};