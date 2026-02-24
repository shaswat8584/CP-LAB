#include <stdio.h>

void main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 1 && age <= 100) {
        printf("Valid Age\n");
    }
    else {
        printf("Invalid Age\n");
    }
}
