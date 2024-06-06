#include <stdio.h>
#include <unistd.h>

void comb(int a, int b, int c, int first)
{
    if (a < 8)
    {
        if (c <= 9)
        {
            if (first != 1)
            {
                print(", ");
            }
            printf("%d%d%d", a, b, c);
            print_comb(a, b, c + 1, 0);
        } 
        else if (b <= 8)
        {
            print_comb(a, b + 1, b + 2, 0);
        }
        else
        {
            print_combinations(a + 1, a + 2, a + 3, 0);
        }
    }
}

void 	print_comb (int a, int b, int c, int first)
{
    comb(0, 1, 2, 1)
}