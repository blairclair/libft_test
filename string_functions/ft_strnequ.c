/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 10:37:04 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:46:10 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (n == 0)
			return (1);
		while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	return (1);
}
