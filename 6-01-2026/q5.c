// wap to print all palindrome numbers from 1 to 1000

#include <stdio.h>

int main() {
    int num, temp, rev, rem;

    for (num = 1; num <= 1000; num++) {
        temp = num;
        rev = 0;

        while (temp > 0) {
            rem = temp % 10;

            if (rem == 0) {
                temp = temp / 10;
                continue;    
            }

            rev = rev * 10 + rem;
            temp = temp / 10;

            if (rev > num)
                break;       
        }

        if (rev == num)
            printf("%d ", num);
    }

    return 0;
}
