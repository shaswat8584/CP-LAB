// wap to input a number and check whether it is palindrome or not

#include <stdio.h>
#include <string.h>

int main() {
    char num[50];
    int i, j;
    int flag = 1;

    printf("Enter a number: ");
    scanf("%s", num);

    i = 0;
    j = strlen(num) - 1;

    while (i < j) {

        if (num[i] == '0') {
            i++;
            continue;
        }

       
        if (num[i] != num[j]) {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if (flag == 1)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}
