/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:42:41 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/23 15:42:42 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// int	main(void)
// {
// 	char string[] = "hello world";
// 	char *ptr = string;
// 	int n = ft_strlen(ptr);
// 	#include <stdio.h>
// 	printf("%d", n);
// }