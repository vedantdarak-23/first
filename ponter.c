// calulating percentage of marks of 5 subjeccts
#include <stdio.h>
int main(){
float a,b,c,d,e,percent;
float *p=&a,*q=&b,*r=&c,*s=&d,*t=&e;
printf("enter marks of 5 subjects: ");
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
percent = (a+b+c+d+e)/5.0;
printf("percentage is: %.2f",percent);
if(percent>=90){
    printf("\nGrade A");
}
else if(percent>=80){
    printf("\nGrade B");
}
else if(percent>=70){
    printf("\nGrade C");
}
else if(percent>=60){
    printf("\nGrade D");
}
else if(percent>=50){
    printf("\nGrade E");
}
else{
    printf("\nGrade f");
}
return 0;

}