/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:39:17 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/21 15:17:27 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void		*ft_cpy_help(const char *src, size_t len, size_t i, char *final)
{
	if (ft_strlen(src) > len)
	{
		while (*(src + i) && i < len)
		{
			*(final + i) = *(src + i);
			i++;
		}
	}
	else
	{
		while (*(src + i))
		{
			*(final + i) = *(src + i);
			i++;
		}
		while (i < len)
		{
			*(final + i) = '\0';
			i++;
		}
	}
	return (final);
}

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	*final;

	j = 0;
	i = 0;
	final = dst;
	ft_cpy_help(src, len, i, final);
	while (*(dst + i) && i < len)
	{
		*(final + i) = *(dst + j);
		j++;
		i++;
	}
	i--;
	return (dst);
}
