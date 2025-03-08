/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_natural_numbers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:21:15 by nranna            #+#    #+#             */
/*   Updated: 2025/01/30 19:06:52 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

unsigned int	sum_of_squares(unsigned int nbr);
unsigned int	square_of_sum(unsigned int nbr);
unsigned int	difference_of_squares(unsigned int nbr);

int	main(void)
{
	printf("%d", square_of_sum(10));
	printf(" %d", sum_of_squares(10));
	printf(" %d", difference_of_squares(10));
	return (0);
}

unsigned int	sum_of_squares(unsigned int nbr)
{
	unsigned int	res;

	res = 0;
	res = (nbr * (nbr + 1) * ((nbr * 2) + 1)) / 6;
	return (res);
}

unsigned int	square_of_sum(unsigned int nbr)
{
	unsigned int	res;

	res = 0;
	res = nbr * (nbr + 1) / 2;
	res = pow(res, 2);
	return (res);
}

unsigned int	difference_of_squares(unsigned int nbr)
{
	return (square_of_sum(nbr) - sum_of_squares(nbr));
}
