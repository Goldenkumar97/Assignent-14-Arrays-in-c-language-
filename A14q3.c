/*WAP to calculate the sum of all even number and sum of all odd number
which are stored in array of size 10.take arrays value from the user*/
#include"stdio.h"
int main()
{
    int a[10],i,soe=0,soo=0;
    printf("Enter 10 number ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if (a[i] % 2 ==0) 
        soe=soe+a[i];
        else
        soo=soo+a[i];
    }
    printf("%d is the sum of all even number\n",soe);
    printf("%d is the sum of all odd number ",soo);
    return 0;
}