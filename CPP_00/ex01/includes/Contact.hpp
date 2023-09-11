/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelro <miguelro@students.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:59:04 by miguelro          #+#    #+#             */
/*   Updated: 2023/09/11 12:25:11 by miguelro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <cstdio>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>

class Contact
{
	public:
		// Constructor
		Contact();
		~Contact();

		// Setters
		void setFirstName(void);
		void setLastName(void);
		void setNickname(void);
		void setPhoneNumber(void);
		void setSecret(void);
	
		// Getters
		std::string getFisrtName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getSecret() const;

  	private:
		// Parameters
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string secret;
};

#endif