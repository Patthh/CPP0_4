/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:45:30 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/26 01:24:22 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string string;
	// a pointer to the string
    std::string* stringPTR = &string;
	//a reference to the string (can't reference to nothing)
    std::string& stringREF = string;
	string = "HI THIS IS BRAIN";
    std::cout << "The memory address of string:\t\t" << &string << std::endl;
    std::cout << "The memory address of stringPTR:\t" << stringPTR << std::endl;
    std::cout << "The memory address of stringREF:\t" << &stringREF << std::endl << std::endl;

    std::cout << "The value of the string:\t\t" << string << std::endl;
    std::cout << "The value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	//reference value doesn't need to be dereferenced with the * operator to access the value (like alias)
    std::cout << "The value pointed to by stringREF:\t" << stringREF << std::endl;

    return 0;
}