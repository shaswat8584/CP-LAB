// Wap to create a student structure have data members as rollno, mark. Display their grade
#include <stdio.h>
struct student
{
    int rollno;
    int mark;
} s1;
int main()
{
    char grade;
    printf("Enter the rollno: ");
    scanf("%d", &s1.rollno);
    printf("Enter the mark: ");
    scanf("%d", &s1.mark);
    if (s1.mark >= 50)
        grade = 'P';
    else
        grade = 'F';
    printf("Rollno: %d\n", s1.rollno);
    printf("Mark: %d\n", s1.mark);
    printf("Grade: %c\n", grade);
}
    