/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 18:55:37 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/17 14:25:41 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns 1 if c is a number or a letter and 0 if it is not.
*/

#include "../includes/libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
		return (1);
	else
		return (0);
}
