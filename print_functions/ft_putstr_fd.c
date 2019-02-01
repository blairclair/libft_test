/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:23:52 by agrodzin          #+#    #+#             */
/*   Updated: 2018/03/19 16:48:25 by agrodzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*A string printing function that uses the write system call and 
takes as a parameter, the file descriptor to point to.*/

#include "../includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s) * sizeof(char));
}
