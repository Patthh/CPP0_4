/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:50 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 02:31:26 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << CYA << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RES << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << GRE << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << RES << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << YEL << "I think I deserve to have some extra bacon for free.\nI've been coming for years, whereas you started working here just last month." << RES << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RES << std::endl;
}

void Harl::complain(std::string level) {
    int level_num = -1;

    if (level == "DEBUG") {
        level_num = 0;
    } else if (level == "INFO") {
        level_num = 1;
    } else if (level == "WARNING") {
        level_num = 2;
    } else if (level == "ERROR") {
        level_num = 3;
    }

    switch (level_num) {
        case 0:
            this->debug();
            if (level_num <= 1) {
				std::cout << std::endl;
                this->info();
            }
            if (level_num <= 2) {
				std::cout << std::endl;
                this->warning();
            }
            if (level_num <= 3) {
				std::cout << std::endl;
                this->error();
            }
            break;
        case 1:
            this->info();
            if (level_num <= 2) {
				std::cout << std::endl;
                this->warning();
            }
            if (level_num <= 3) {
				std::cout << std::endl;
                this->error();
            }
            break;
        case 2:
            this->warning();
            if (level_num <= 3) {
				std::cout << std::endl;
                this->error();
            }
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}