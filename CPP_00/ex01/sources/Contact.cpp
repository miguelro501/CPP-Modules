/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelro <miguelro@students.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:08:41 by miguelro          #+#    #+#             */
/*   Updated: 2023/09/11 12:25:04 by miguelro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static bool	verifyInput(std::string input);
static 		std::string setParameter(std::string parameter);

// Constructor-----------------------------------

Contact::Contact(){}

Contact::~Contact(){}

// Setters---------------------------------------

void Contact::setFirstName()
{
	firstName = setParameter("First Name: ");
}

void Contact::setLastName()
{
	lastName = setParameter("Last Name: ");
}

void Contact::setNickname()
{
	nickname = setParameter("Nickname: ");
}

void Contact::setPhoneNumber()
{
	phoneNumber = setParameter("PhoneNumber: ");
}

void Contact::setSecret()
{
	secret = setParameter("Secret: ");
}

// Getters---------------------------------------

std::string Contact::getFisrtName() const
{
	return (firstName);
}

std::string Contact::getLastName() const
{
	return (lastName);
}

std::string Contact::getNickname() const
{
	return (nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

std::string Contact::getSecret() const
{
	return (secret);
}

// Functions

static bool	verifyInput(std::string input)
{
	if (input == "")
		return (false);
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!isspace(input[i]))
			return (true);
	}
	return (false);
}

static std::string setParameter(std::string parameter)
{
	std::string input;
	while (1)
	{
		std::cout << parameter;
		std::getline(std::cin >> std::ws, input);
		if (verifyInput(input))
			break ;
		std::cout << "Invalid " << parameter << std::endl;
	}
/* 	if (input.size() > 10)
	{
		input[9] = '.';
		input.erase(10, input.size() - 10);
	} */
	return (input);
}