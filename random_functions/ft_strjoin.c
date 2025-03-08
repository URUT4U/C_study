/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:06:51 by nranna            #+#    #+#             */
/*   Updated: 2025/03/08 16:21:07 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_mega_strlen(int size, char **strs, char *sep);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	
	i = 0;
	//check if size is 0 to return an empty string "freeable".
	if (size == 0)
	{
		res = malloc(sizeof(char) * 1);
		res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * ft_mega_strlen(size, strs, sep));
	if (!res)
		return (NULL);
	res[0] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

int	ft_mega_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size) //iterate trough the number of strings
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
return (i);
}

int	main(int argc, char **argv)
{
	char	*strs[] = 
	{
		"hello",
		"world"
	};
	char	*sep;
	char	*result;

	sep = "<&&>";
	result = ft_strjoin(2, strs, sep);
	free(result);
	return (0);
}
