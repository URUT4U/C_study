/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leap_year.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 05:03:32 by nranna            #+#    #+#             */
/*   Updated: 2024/07/25 05:36:54 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	leap_year(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return (true);
			else
				return (false);
		}
		else
			return (true);
	}
	return (false);
}
