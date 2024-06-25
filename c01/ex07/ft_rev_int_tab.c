/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:58:50 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/13 20:58:52 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// int main()
// {
// 	#include <stdio.h>
//     int nums[] = {1, 2, 3, 4, 5, 6, 7};
// 	int amount = 7;
//     int *ptr = nums;
// 	int	i;

// 	i = 0;
//     ft_rev_int_tab(ptr, amount);
//     while (i < amount)
// 	{
// 		write(1, &nums[i], 1);
// 		i++;
// 	}
// }