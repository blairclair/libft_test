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

/*A character printing function that uses the write system call*/
#include "../includes/libft.h"

void	ft_putchar(char c)
{						  
	unsigned char	b;

	b = (unsigned char)c;
	write(1, &b, 1);
}
