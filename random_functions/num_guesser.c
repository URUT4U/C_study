/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_guesser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:12:47 by nranna            #+#    #+#             */
/*   Updated: 2024/03/21 17:42:49 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int	main(void)
{
	int	n, guess;
	
	srand(time(NULL));
	printf("Try guessing what number is on my mind. :)\n");
	n = rand() % 5 + 1;
	printf("What's your guess? ");
	scanf("%d", &guess);
	if (n == guess)
	{
		printf("Nice.\n");
		return (0);
	}
	printf("Wrong. My number is %d :)\n", n);
	return (0);
}
