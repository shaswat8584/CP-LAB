//Wap to enter student roll, name and subject of two mark. Then swap them by using call by address with function. Then display swapping mark along with roll and name.

#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[50];
    int mark1;
    int mark2;
} s1;

void swapMarks(int *mark1, int *mark2)
{
    int temp = *mark1;
    *mark1 = *mark2;
    *mark2 = temp;
}

int main()
{
    printf("Enter the rollno: ");
    scanf("%d", &s1.rollno);
    printf("Enter the name: ");
    scanf("%s", s1.name);
    printf("Enter the mark1: ");
    scanf("%d", &s1.mark1);
    printf("Enter the mark2: ");
    scanf("%d", &s1.mark2);
    swapMarks(&s1.mark1, &s1.mark2);
    printf("After swapping marks:\n");
    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Mark 1: %d\n", s1.mark1);
    printf("Mark 2: %d\n", s1.mark2);
    return 0;
}
