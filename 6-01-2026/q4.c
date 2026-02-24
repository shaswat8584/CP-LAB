// wap to print all prime numbers from 1 to 500

#include <stdio.h>

int main() {
    int num, i;

    for (num = 2; num <= 500; num++) {

       
        if (num == 1)
            continue;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                break;     
            }
        }

        if (i > num / 2) {
            printf("%d ", num);
        }
    }

    return 0;
}
