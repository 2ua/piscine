/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleissiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:01:23 by jleissiu          #+#    #+#             */
/*   Updated: 2024/06/05 13:01:26 by jleissiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		remainder;
	int		division;

	division = a / b;
	remainder = a % b;
	*div = division;
	*mod = remainder;
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	int		num1;
// 	int		num2;
// 	int		*divi;
// 	int		*modu;

// 	num1 = 0;
// 	num2 = 0;
// 	divi = &num1;
// 	modu = &num2;
// 	ft_div_mod(50, 6, divi, modu);
// 	printf("%d\n%d", num1, num2);
// }
