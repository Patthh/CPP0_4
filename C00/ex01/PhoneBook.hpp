/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:55 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/23 17:06:43 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

// ANSI color codes
#include "Colors.hpp"
#include "Contact.hpp"

typedef std::string str;

class PhoneBook{
	private:
		Contact			contacts[8];
		unsigned int	contacts_amount;
		
	public:
		PhoneBook(void);
		PhoneBook(const PhoneBook& other);
		PhoneBook& operator=(const PhoneBook& other);
		~PhoneBook(void);

		void	clearScreenANSI(void);
		void	printPrompt(void);
		void	exitPhoneBook(void);
		void	add(void);
		void	search(void);

};

#endif 
