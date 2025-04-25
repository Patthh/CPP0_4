/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:45:30 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 02:19:34 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2) 
	{
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
    }

    Harl harl;
    harl.complain(argv[1]);

    return (0);
}