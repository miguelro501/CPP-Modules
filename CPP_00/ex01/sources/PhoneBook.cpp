/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelro <miguelro@students.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:22:11 by miguelro          #+#    #+#             */
/*   Updated: 2023/09/11 12:29:21 by miguelro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	printContact(Contact contact);
static void	printRow(Contact contact, int index);
static void	printElement(std::string element);

// Constructor-----------------------------------
PhoneBook::PhoneBook(): nbrContact(0), oldestContact(0){}

PhoneBook::~PhoneBook(){}

// Functions-------------------------------------
static void	printContact(Contact contact)
{
	std::cout << "\x1B[2J\x1B[H";
	std::cout << "------------------------------------------------------------\n";
	std::cout << "First Name: " << contact.getFisrtName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Secret: " << contact.getSecret() << std::endl;
	std::cout << "------------------------------------------------------------\n";
	std::cout << "\n Press anything to Continue" << std::endl;
	std::getchar();
}

static void	printRow(Contact contact, int index)
{
	std::cout << "         " << index << " | ";
	printElement(contact.getFisrtName());
	std::cout << " | ";
	printElement(contact.getLastName());
	std::cout << " | ";
	printElement(contact.getNickname());
	std::cout << " | " << std::endl;
}

static void	printElement(std::string element)
{
	int	elem_length;
	int	nbr_spaces;

	if (element.size() > 10)
		std::cout << element.substr(0, 9) << ".";
	else if (element.size() == 10)
		std::cout << element;
	else
	{
		elem_length = element.size();
		nbr_spaces = 10 - elem_length;
		for (int i = 0; i < nbr_spaces; i++)
			std::cout << " ";
		std::cout << element;
	}
}

void PhoneBook::searchContact()
{
	int	index;

	std::string input;
	std::cout << "\x1B[2J\x1B[H";
	if (nbrContact == 0)
	{
		std::cout << "PhoneBook empty" << std::endl;
		std::cout << "\n Press anything to Continue" << std::endl;
		std::getchar();
	}
	std::cout << "---------------------- SEARCH ----------------------" << std::endl;
	std::cout << "     INDEX |   FIRST N. |    LAST N. |   NICKNAME |" << std::endl;
	for (int i = 0; i < nbrContact; i++)
		printRow(contacts[i], i + 1);
	std::cout << "----------------------------------------------------\n"
				<< std::endl;
	std::cout << "For more info about a specific contact insert it's index or anything else to exit" << std::endl;
	std::cout << "> ";
	std::getline(std::cin >> std::ws, input);
	if (input.size() == 1 && isdigit(input[0]))
	{
		index = std::strtol(input.c_str(), '\0', 10);
		if (0 < index && index < 9)
			printContact(contacts[index - 1]);
	}
}

void PhoneBook::createContact()
{
	int	currentContact;

	if (nbrContact == 8)
		currentContact = oldestContact;
	else
		currentContact = nbrContact;
	std::cout << "---------- Provide Contact info ----------\n";
	contacts[currentContact].setFirstName();
	contacts[currentContact].setLastName();
	contacts[currentContact].setNickname();
	contacts[currentContact].setPhoneNumber();
	contacts[currentContact].setSecret();
	std::cout << "\nContact added press anyting to continue\n";
	std::getchar();
	if (nbrContact == 8)
	{
		if (oldestContact < 7)
			oldestContact++;
		else
			oldestContact = 0;
	}
	else
		nbrContact++;
}
