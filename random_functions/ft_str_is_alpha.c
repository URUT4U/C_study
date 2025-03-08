/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:06:05 by nranna            #+#    #+#             */
/*   Updated: 2024/07/22 23:08:45 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	aux(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (aux(str[i]) == 0) //se NÃO for um char do alph, retorna 0.
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	printf("%d\n", ft_str_is_alpha("Nathan"));
	printf("%d\n", ft_str_is_alpha("P1TU#Q5"));
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
