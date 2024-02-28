/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:05:42 by nranna            #+#    #+#             */
/*   Updated: 2024/02/28 16:24:00 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	char	*src_copy;

	n = 0;
	while (src[n])
		n++;
	src_copy = malloc(sizeof(char) * (n + 1));
	if (!src_copy)
		return (NULL);
	n = 0;
	while (src[n])
	{
		src_copy[n] = src[n];
		n++;
	}
	return (src_copy);
}
