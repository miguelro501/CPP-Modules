/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelro <miguelro@students.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:57:35 by miguelro          #+#    #+#             */
/*   Updated: 2023/09/11 12:30:07 by miguelro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#define MAX_CONTACTS 8

#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

class PhoneBook
{
	public:
		// Constructors
		PhoneBook();
		~PhoneBook();
	
		// Setters
		void createContact();
		void searchContact();
		
	private:
		Contact contacts[MAX_CONTACTS];
		int nbrContact;
		int oldestContact;
};

#endif