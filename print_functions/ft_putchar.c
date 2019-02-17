/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:30:39 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:50:13 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
Writes a character to stdout
*/

void	ft_putchar(char c)
{						  
	write(1, &c, 1);
}
