//Niamat Elahi Emon
//ID:202201719
#include<stdio.h>
#include<math.h>

int main()
{
    float arm, shaded_area;

    printf("Enter the arm of Square: ");
    scanf("%f", &arm);

    shaded_area = pow( arm, 2 ) - 3.14159*pow((arm/2), 2 );


    printf("\n The shaded region given the arm of the square is %.5f", shaded_area);

    return 0;
}
