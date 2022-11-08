//Niamat Elahi Emon
//ID:202201719
#include<stdio.h>

int main()

{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);

    if(marks>=80 && marks<=100)
        printf("A+");

    if(marks>=70 && marks<=79)
        printf("A");

    if(marks>=60 && marks<=69)
        printf("A-");

    if(marks>=50 && marks<=59)
        printf("B");

    if(marks>=40 && marks<=49)
        printf("C");

    if(marks>=0 && marks<=39)
        printf("FAIL");

    return 0;

}
