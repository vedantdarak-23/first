//Program on structures to perform different operations
#include <stdio.h>
struct student 
{
    char name[50];
    char roll[10];
    float marks;
};
int main()
{
    struct student s1, s2, s3;

    printf("\nEnter details for student 1:\n");
    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter roll number: ");
    fgets(s1.roll, sizeof(s1.roll), stdin);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    getchar(); 

    printf("\nEnter details for student 2:\n");
    printf("Enter name: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    printf("Enter roll number: ");
    fgets(s2.roll, sizeof(s2.roll), stdin);
    printf("Enter marks: ");
    scanf("%f", &s2.marks);
    getchar(); 

    printf("\nEnter details for student 3:\n");
    printf("Enter name: ");
    fgets(s3.name, sizeof(s3.name), stdin);
    printf("Enter roll number: ");
    fgets(s3.roll, sizeof(s3.roll), stdin);
    printf("Enter marks: ");
    scanf("%f", &s3.marks);

    printf("\n----- Student Information -----\n");
    printf("\nStudent 1:\nName: %sRoll Number: %sMarks: %.2f\n", s1.name, s1.roll, s1.marks);
    printf("\nStudent 2:\nName: %sRoll Number: %sMarks: %.2f\n", s2.name, s2.roll, s2.marks);
    printf("\nStudent 3:\nName: %sRoll Number: %sMarks: %.2f\n", s3.name, s3.roll, s3.marks);

    return 0;
}
