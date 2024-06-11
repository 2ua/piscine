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

#include <unistd.h>

int ft_strlen(char *str)
{
    int len;

    while (len > 0)
    {
        if (str[len] != "\0")
        {
            len++;
        }
        else
        {
            return len;
        }
    }
}

int main()
{
    char *string[] = {"a", "b", "c", "d", "e"};

    int length = ft_strlen(string);
    write(1, &length, 1);
}