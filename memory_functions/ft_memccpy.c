/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:46:42 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:45:42 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Copies n bytes of string src to string dst unless the character c
is found in the string in which case a pointer to the byte after c is
returned.
*/

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t	i;
	char	*cdst;
	char	*csrc;
	int		*num;

	i = 0;
	num = NULL;
	cdst = (char*)dst;
	csrc = (char*)src;
	while (i < n)
	{
		if (*csrc == (char)c)
		{
			*cdst++ = *csrc++;
			return (cdst);
		}
		*cdst++ = *csrc++;
		i++;
	}
	return (num);
}
