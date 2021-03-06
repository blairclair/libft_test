/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 09:16:54 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/17 14:26:04 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
If c is an lowercase letter then it returns the uppercase version.
Otherwise it returns itself.
*/ 

int	ft_toupper(int c)
{
	if (c >= (char)97 && c <= (char)122)
		return (c - 32);
	return (c);
}
