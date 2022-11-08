//Niamat Elahi Emon
//ID:202201719
#include<stdio.h>

int main()

{
    int n,i,count=0;

    printf("Enter n value : ");
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)

            count++;
    }

    if(count==0)
        printf("%d is a Prime Number",n);
    else
        printf("%d is Not Prime Number",n);

    return 0;

}

