#include <stdio.h>
void main() {
int m1, m2, m3;
float avg;
printf("Enter 3 marks: ");
scanf("%d %d %d", &m1, &m2, &m3);
avg = (m1 + m2 + m3) / 3.0;
printf("Average = %.2f\n", avg);
if(avg >= 90 && avg <= 100) {
        printf("Grade: Outstanding\n");
 }
 else if(avg >= 80 && avg < 90) {
    printf("Grade: Excellent\n");
    }
 else {
printf("Grade: Legends\n");
    }
}
