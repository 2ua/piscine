#include <stdio.h>
#include <stdio.h>'

int first = 0;

void getAscendingOrder(int n, int start, int currentLength, int result[]) {
    if (currentLength == n) {
        if(first == 0){
            first = 1;
        } else{
            write(1, ", ", 2);
        }

        for (int i = 0; i < n; i++) {
            char digit = result[i] + '0';
            write(1,&digit,1);
        }
        return;
    }

    for (int i = start; i <= 9; i++) {
        result[currentLength] = i;
        getAscendingOrder(n, i + 1, currentLength + 1, result);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n > 10) {
        return;
    }

    int result[n];
    getAscendingOrder(n, 0, 0, result);
}