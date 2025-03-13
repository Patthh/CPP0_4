/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:55 by pracksaw          #+#    #+#             */
/*   Updated: 2025/03/12 23:01:55 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
#include <cstring>
#include <cstdlib>

// ANSI color codes
#include "colors.hpp"

typedef std::string str;

class Contact{
	private:
		str	first_name;
		str	last_name;
		str	nickname;
		str	phone_number;
		str	darkest_secret;

	public:
		Contact(void);
		~Contact(void);

		int			checkPrintable(str s);
		str			getFirst_name(void);
		str			getLast_name(void);
		str			getNickname(void);
		str			getPhone_number(void);
		str			getDarkest_secret(void);
		void		print(void);
		void		setFirst_name(void);
		void		setLast_name(void);
		void		setNickname(void);
		void		setPhone_number(void);
		void		setDarkest_secret(void);

};

class PhoneBook{
	private:
		Contact			contacts[8];
		unsigned int	contacts_amount;
		
	public:
	
		PhoneBook(void);
		~PhoneBook(void);

		void	clearScreenANSI(void);
		void	printPrompt(void);
		void	exitPhoneBook(void);
		void	ADD(void);
		void	SEARCH(void);

};

#endif 
