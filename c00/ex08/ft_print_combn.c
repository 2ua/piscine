#include <stdio.h>
#include <unistd.h>

void get_ascending_order(int n, int start, int length, int result[], int first) {
    int i;

    if (length == n)
    {
        if(first == 0)
        {
            write(1, ", ", 2);
        }

        for (int i = 0; i < n; i++)
        {
            char digit = result[i] + '0';
            write(1,&digit,1);
        }
        return;
    }
    i = start;
    while (i <= 9)
    {
        i++;
        result[length] = i;
        get_ascending_order(n, i + 1, length + 1, result, 0);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n > 10) {
        return;
    }

    int result[n];
    get_ascending_order(n, 0, 0, result, 1);
}