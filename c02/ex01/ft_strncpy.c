/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:08:26 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/11 16:08:29 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
	return (dest);
}

// int main()
// {
// 	#include <stdio.h>
// 	int		amount;
// 	char	string1[] = "";
// 	char	string2[] = "Hello world!";
// 	char	*dest = string1;
// 	char	*src = string2;

// 	amount = 7;
// 	ft_strncpy(dest, src, amount);
// 	printf("%s\n",string1);
// }