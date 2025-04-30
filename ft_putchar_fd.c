/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:26:56 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/30 21:14:47 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 		return (1);

// 	ft_putchar_fd('A', fd);

// 	close(fd);
// 	return (0);
// }