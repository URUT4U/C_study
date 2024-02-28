/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:18:39 by nranna            #+#    #+#             */
/*   Updated: 2024/02/28 15:54:31 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeater(char c)
{
	int	repeat;

	repeat = 0;
	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char **argv)
{
	int	repeat;

	repeat = 0;
	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = repeater(*argv[1]);
			while (repeat)
			{
				write (1, argv[1], 1);
				repeat--;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
