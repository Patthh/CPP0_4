/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:16:55 by pracksaw          #+#    #+#             */
/*   Updated: 2025/03/12 21:22:32 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
#include <cstring>
#include <cstdlib>

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

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
		str			get_first_name(void);
		str			get_last_name(void);
		str			get_nickname(void);
		str			get_phone_number(void);
		str			get_darkest_secret(void);
		void		print(void);
		void		set_first_name(void);
		void		set_last_name(void);
		void		set_nickname(void);
		void		set_phone_number(void);
		void		set_darkest_secret(void);

};

class PhoneBook{
	private:
		Contact			contacts[8];
		unsigned int	contacts_amount;
		
	public:
	
		PhoneBook(void);
		~PhoneBook(void);

		void	ADD(void);
		void	SEARCH(void);

};

#endif 
