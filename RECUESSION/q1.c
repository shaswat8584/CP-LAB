//Wap to print the first 50 natural numbers using recursion.
#include <stdio.h>
void Pnn(int n) {
    if (n > 0) {
        Pnn(n - 1); // Recursive call with n-1
        printf("%d ", n); // Print the current number after the recursive call
    }
}

int main() {
    Pnn(50); // Print first 50 natural numbers
    return 0;
}