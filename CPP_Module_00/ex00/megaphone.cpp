<<<<<<< HEAD
#include <cctype>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:12:21 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/29 11:57:22 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 952e0e5 (module00--done)
#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac < 2)
	{
		std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			std ::cout << (char)toupper(av[i][j]);
			j++;
		}
		i++;
	}
	std ::cout << "\n";
	return (0);
}
