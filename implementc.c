#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
struct student s1[3];
void main()
{
    int i;
    printf("Enter Name, RollNo, and Marks of Three Students:\n");
    //Reading Student details
    for(i=0; i<=2; i++)
        scanf("%s %d %f",&s1[i].name,&s1[i].rollno,&s1[i].marks);

    // Printing the same details what you enter in array form.
    printf("Student Name\tStudent Rollno\tStudent Marks:");
    for(i=0; i<=2; i++)
        printf("\n%s\t\t%d\t\t%.2f", s1[i].name, s1[i].rollno, s1[i].marks);
    getch();
}
