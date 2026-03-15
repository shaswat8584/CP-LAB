//Wap to create a array of student structure having data members as rollno,name, mark and display the details of all students.
#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    int mark;
};

int main()
{
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the rollno, name and mark of student %d: ", i + 1);
        scanf("%d%s%d", &s[i].rollno, s[i].name, &s[i].mark);
    }
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Rollno: %d, Name: %s, Mark: %d\n", s[i].rollno, s[i].name, s[i].mark);
    }
    return 0;
}