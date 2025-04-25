/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:55 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 02:33:48 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define RES "\033[0m"
#define RED "\033[31m"
#define GRE "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYA "\033[36m"
#define WHI "\033[37m"

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};
	