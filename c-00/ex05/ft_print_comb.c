#include <stdio.h>
// #include <unistd.h>

void ft_print_comb(void){
    int n[3];

    for(int i='0'; i <= '9'; i++){
        n[0] = i;

        for (int j='0'; j <= '9'; j++){
            if(j <= i) continue;
            n[1] = j;

            for (int k='0'; k <= '9'; k++){
                if (k <= j) continue;
                n[2] = k;

                write(1, &n[0], 1);
                write(1, &n[1], 1);
                write(1, &n[2], 1);


                if(i == '7' && j == '8' && k == '9') continue;
                write(1, ", ",1);
            }
        }
    }
}

