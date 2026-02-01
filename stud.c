#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    char roll[10];
    float marks;
};

void clearInputBuffer() {
    char c;
    scanf("%c", &c);
}

void input(struct student *s) {
    printf("Enter name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = 0;

    printf("Enter roll number: ");
    fgets(s->roll, sizeof(s->roll), stdin);
    s->roll[strcspn(s->roll, "\n")] = 0;

    printf("Enter marks: ");
    scanf("%f", &s->marks);
    clearInputBuffer();
}

void display(struct student *s) {
    printf("\nStudent Details:");
    printf("\nName: %s", s->name);
    printf("\nRoll Number: %s", s->roll);
    printf("\nMarks: %.2f\n", s->marks);
}

int main() {
    struct student s1, s2, s3;

    printf("\nEnter details for student 1:\n");
    input(&s1);

    printf("\nEnter details for student 2:\n");
    input(&s2);

    printf("\nEnter details for student 3:\n");
    input(&s3);

    printf("\n----- Student Information -----\n");
    display(&s1);
    display(&s2);
    display(&s3);

    return 0;
}