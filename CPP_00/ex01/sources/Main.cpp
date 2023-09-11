/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelro <miguelro@students.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:45:43 by miguelro          #+#    #+#             */
/*   Updated: 2023/07/05 17:03:17 by miguelro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//trocar std::fetline() por std::getchar() also problems with ççç
static void	options(void)
{
	std::cout << "|-----------------------Phonebook-----------------------|" << std::endl;
	std::cout << "|                        1-ADD                          |" << std::endl;
	std::cout << "|                        2-SEARCH                       |" << std::endl;
	std::cout << "|                        3-EXIT                         |" << std::endl;
	std::cout << "|-------------------------------------------------------|" << std::endl;
	std::cout << "> ";
}

int	main(void)
{
	PhoneBook phoneBook;
	std::string input;
	char choice = '0';
	while (1)
	{
		std::cout << "\x1B[2J\x1B[H";
		options();
		choice = getchar();
		switch (choice)
		{
		case ('1'):
			phoneBook.createContact();
			break ;
		case ('2'):
			phoneBook.searchContact();
			break ;
		case ('3'):
			std::cout << "Closing PhoneBook" << std::endl;
			return (0);
		default:
			break ;
		}
	}
	return (0);
}