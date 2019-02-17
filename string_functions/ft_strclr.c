/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 10:46:45 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:43:21 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Sets every character in string s to zero
*/

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (!s || !*s)
		return ;
	while (s[i])
	{
		s[i] = 0;
		i++;
	}
	s[i] = '\0';
}
