// wap to print all armstrong numbers from 1 to 1000

#include <stdio.h>

int main() {
    int num, temp, rem;
    int sum;

    for (num = 1; num <= 1000; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            rem = temp % 10;

            if (rem == 0) {
                temp = temp / 10;
                continue;          
                

            sum = sum + (rem * rem * rem);

            if (sum > num) {
                break;            
            }

            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
