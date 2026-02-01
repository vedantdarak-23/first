#include<stdio.h>
struct student 
{
    char name[50];
    char roll[10];
    float marks;
};
 
int main()
{
    struct student s1,s2,s3;
    printf("\nEnter details for student 1:\n");
    printf("Enter name: ");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Enter roll number: ");
    fgets(s1.roll,sizeof(s1.roll),stdin);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);
    getchar();
    printf("details of student 1:\nName: %s Roll Number: %s Marks: %f\n",s1.name,s1.roll,s1.marks);
    return 0;

}