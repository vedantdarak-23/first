#include <stdio.h>

int main() {
    int mark;
    printf("enter the mark: ");
    scanf("%d",&mark);
    if (mark<=30 && mark>=0){
        printf("fail!!");
        printf("C grade!!");
    }
    else if(mark>30 && mark<=100) {
        printf("pass!!");
        if (mark>30&&mark<70){
            printf("B grade!!");
        }
        else if(mark>=70 && mark<=90){
            printf("A !!");
        }
        else {
            printf("A+ !!");
        }
    }
    else {
        printf("invalid mark!!");
    }
    return 0;
}