/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelro <miguelro@students.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:22:11 by miguelro          #+#    #+#             */
/*   Updated: 2023/09/11 12:20:30 by miguelro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	UpCase(char **arg)
{
	int	i;
	int	j;

	i = 0;
	while (arg[++i])
	{
		j = -1;
		while (arg[i][++j])
		{
			if ('a' <= arg[i][j] && arg[i][j] <= 'z')
				std::cout << (arg[i][j] -= 32);
			else
				std::cout << (arg[i][j]);
		}
	}
	std::cout << "\n";
}

int	main(int ac, char **arg)
{
	if (ac > 1)
		UpCase(arg);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}