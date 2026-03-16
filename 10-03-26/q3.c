// Wap to create array of 5 students structure. And each student has array of 5 subjects. Take the input all then display roll, name, avg and grade.

#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[50];
    int marks[5];
    char grade;
    float avg;
} s[5];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the rollno for student %d: ", i + 1);
        scanf("%d", &s[i].rollno);
        printf("Enter the name for student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the marks for 5 subjects for student %d: ", i + 1);
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
            sum += s[i].marks[j];
        }
        s[i].avg = sum / 5.0;
        if (s[i].avg < 30)
        {
            s[i].grade = 'F';
        }
        else if (s[i].avg >= 30 && s[i].avg < 50)
        {
            s[i].grade = 'P';
        }
        else if (s[i].avg >= 50 && s[i].avg < 60)
        {
            s[i].grade = 'C';
        }
        else if (s[i].avg >= 60 && s[i].avg < 70)
        {
            s[i].grade = 'B';
        }
        else if (s[i].avg >= 70 && s[i].avg < 80)
        {
            s[i].grade = 'A';
        }
        else if (s[i].avg >= 80 && s[i].avg < 90)
        {
            s[i].grade = 'E';
        }
        else
        {
            s[i].grade = 'O';
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Average: %.2f\n", s[i].avg);
        printf("Grade: %c\n", s[i].grade);
    }
    return 0;
}
