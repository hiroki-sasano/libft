/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:21:13 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/30 21:45:35 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// int main()
// {
// 	char	s[] = "ABCDEFG";

// 	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 		return -1;
	
// 	ft_putstr_fd(s, fd);

// 	return 0;
// }