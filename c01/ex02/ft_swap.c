/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:39:30 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/05 12:39:38 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main()
// {
// 	#include <stdio.h>
// 	int		first;
// 	int		second;
// 	int		*ptr1;
// 	int		*ptr2;

// 	first = 20;
// 	second = 5;
// 	ptr1 = &first;
// 	ptr2 = &second;
// 	ft_swap(ptr1, ptr2);
// 	printf("%d\n%d\n", first, second);
// }