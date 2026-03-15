//Wap to create a rectangle structure have data members as length and breadth. Find and display the area of rectangle.
#include <stdio.h>
struct rectangle
{
    float length;
    float breadth;
} r1;
int main()
{
    float area;
    printf("Enter the length: ");
    scanf("%f", &r1.length);
    printf("Enter the breadth: ");
    scanf("%f", &r1.breadth);
    area = r1.length * r1.breadth;
    printf("Area of rectangle: %.2f\n", area);
}