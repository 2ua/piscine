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

    #include <stdio.h>


void ft_rev_int_tab(int *tab, int size)
{
    int		i;
	int		temp;
	int		len;

	len = 0;
	i = 0;
	if (size % 2 == 1)
	{
		len++;
	}
	len += size / 2;

	while (i <= len)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

int main()
{
    #include <stdio.h>
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ptr = nums;
    int amount = 8;

    ft_rev_int_tab(ptr, amount);
    printf("%d", nums[0]);
    printf("%d", nums[1]);
    printf("%d", nums[2]);
	printf("%d", nums[3]);
    printf("%d", nums[4]);
    printf("%d", nums[5]);
    printf("%d", nums[6]);
}