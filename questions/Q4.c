#include <stdio.h>

void main() {
int a, b, c;
int D; 

 printf("Enter values of a, b and c: ");
scanf("%d %d %d", &a, &b, &c);
 if(a == 0) {
printf("Not a quadratic equation!\n");
 }
else {
D = (b * b) - (4 * a * c);

   if(D >= 0) {
 printf("Roots are Real\n");
  }
    else {
  printf("Roots are Imaginary (Not Real)\n");
        }
    }
}
