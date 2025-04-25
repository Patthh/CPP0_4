/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:27:56 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 00:35:51 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
		//automatically called when an object of a class is created
		Weapon(const std::string &weapon);
		//automatically called when an object of a class is destroy
		~Weapon();
		std::string getType() const;
		//const -> will not modify actual weapon value
		void setType(const std::string &weapon);

};