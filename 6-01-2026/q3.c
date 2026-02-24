// wap to input a number and check whether it is armstrong or not

#include <stdio.h>

int main() {
    int num, temp, rem;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Not an Armstrong number");
        return 0;   
    }

    temp = num;

    while (temp > 0) {
        rem = temp % 10;

        if (rem == 0) {
            temp = temp / 10;
            continue; 
        }

        sum = sum + (rem * rem * rem);

        if (sum > num) {
            break;    
        }

        temp = temp / 10;
    }

    if (sum == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
