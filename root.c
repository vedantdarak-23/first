#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    int num;
    int root;
    int square;
    int cube;

    do {
        printf("1. Find square root of a number\n");
        printf("2. Check perfect square\n");
        printf("3. Find cube root of a number\n");
        printf("4. Find cube of a number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
            // square root of negative number can be possible 
                if (num < 0) {
                    printf("Square root of a negative number is not possible.\n");
                } else {
                    printf("Square root of %d is %.2f\n", num, sqrt(num));
                }
                break;
            // check whether the number is perfect square or not 
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                square = num * num;
                printf("Square of %d is %d\n", num, square);
                break;
            // exit the program
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
            // cube root of negative number can be possible 
                if (num < 0) {
                    printf("cube root of a negative number is not possible.\n");
                } else {
                    printf("cube root of %d is %.2f\n", num, cbrt(num));
                }
                break;
            case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            //cube of number 
            cube = num * num * num ;
            printf("Cube of %d is %d\n", num, cube);
            break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}
