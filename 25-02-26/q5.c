//Wap to create a student structure have data members as rollno, mark,DOB, DOB is nested structure having data members as dd, mm, yyyy. Display their grade and DOB.
#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yyyy;
};
struct student
{
    int rollno;
    int mark;
    struct date DOB;
} s1;
int main()
{
    char grade;
    printf("Enter the rollno: ");
    scanf("%d", &s1.rollno);
    printf("Enter the mark: ");
    scanf("%d", &s1.mark);
    printf("Enter the DOB (dd mm yyyy): ");
    scanf("%d %d %d", &s1.DOB.dd, &s1.DOB.mm, &s1.DOB.yyyy);
    if (s1.mark >= 50)
        grade = 'P';
    else
        grade = 'F';
    printf("Rollno: %d\n", s1.rollno);
    printf("Mark: %d\n", s1.mark);
    printf("Grade: %c\n", grade);
    printf("DOB: %02d/%02d/%04d\n", s1.DOB.dd, s1.DOB.mm, s1.DOB.yyyy);
//     printf("Student Details: Rollno=%d, Mark=%d, DOB=%02d/%02d/%04d\n", s1.rollno, s1.mark, s1.DOB.dd, s1.DOB.mm, s1.DOB.yyyy);
}