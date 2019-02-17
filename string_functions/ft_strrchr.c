/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:17:20 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:48:57 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Locates the last occurence of c in string s and
returns a pointer to it
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*num;
	char	c_char;
	size_t	len;

	len = ft_strlen(s);
	num = NULL;
	c_char = (char)c;
	if (c_char == '\0')
		return ((char*)s + len);
	while (*s)
	{
		if (*s++ == c_char)
			num = (char*)s - 1;
	}
	return (num);
}
