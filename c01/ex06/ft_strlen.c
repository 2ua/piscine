/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:39:01 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/10 12:39:03 by jleissiu         ###   ########.fr       */
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

// int main()
// {
//     #include <stdio.h>
//     char string[] = "super";
//     char string2[] = "super long";
//     char *ptr = string;
//     char *ptr2 = string2;

//     int length = ft_strlen(ptr);
//     int length2 = ft_strlen(ptr2);
//     printf("%d\n", length);
//     printf("%d", length2);
// }