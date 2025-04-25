/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <pracksaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:20:23 by pracksaw          #+#    #+#             */
/*   Updated: 2025/04/23 17:13:31 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

// ANSI color codes
#include "Colors.hpp"

typedef std::string str;

class Contact{
	private:
		str	first_name;
		str	last_name;
		str	nickname;
		str	phone_number;
		str	darkest_secret;

	public:
		Contact(void);										// Constructor
		Contact(const Contact& other);						// Copy constructor
		Contact& operator=(const Contact& other);			// Copy assignment operator
		~Contact(void);										// Destructor
 
		bool 		isValidInput(const str &s);
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

#endif 