#include <stdio.h>
#include <unistd.h>

void ft_print_comb2(void){
    char split[5];

    int i = 0;

    while(i <= 98){
        int j = i+1;
        while(j <= 99){
            split[0] = '0' + i / 10;
            split[1] = '0' + i % 10;
            split[2] = ' ';
            split[3] = '0' + j / 10;
            split[4] = '0' + j % 10;

            write(1,split,5);
            if(i == 98 && j == 99) return;
            write(1,", ",2);
            j++;
        }
        i++;
    }
}