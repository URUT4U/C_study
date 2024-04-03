/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ternary.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:43:32 by nranna            #+#    #+#             */
/*   Updated: 2024/03/21 17:50:59 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//ternary is quite easy
int	main(void)
{
	int	x;
	
	x = 1;
	/*	resp will receive 999 or 666
		999 if x > 0. | 666 otherwise.		*/
	int resp = (x > 0) ? 999 : 666;
	printf("%d\n", resp);
	return (0);
}
