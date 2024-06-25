/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:01:47 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/05 15:01:50 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

// int main()
// {
// 	#include <stdio.h>
// 	int a;
// 	int b;
// 	int *ptr1;
// 	int *ptr2;

// 	a = 10;
// 	b = 5;
// 	ptr1 = &a;
// 	ptr2 = &b;
// 	ft_ultimate_div_mod(ptr1, ptr2);

// 	printf("%d\n%d", a, b);
// }