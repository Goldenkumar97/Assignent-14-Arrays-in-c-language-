/*Write a program to calculate the sum of number stored in an array of size 10 take
array value from the user.*/
#include"stdio.h"
int  main()
{
    int i,a[10],sum=0;
    printf("Enter number ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
        printf("%d of the sum of given number ",sum);
    
    return 0;
}