/* WAP to to find the smallest number stored in a array of size 10 take 
array from the user */
#include"stdio.h"
int main()
{
    int a[10],i;
    printf("Enter ten number ");
    for(i=1;i<=9;i++)
    {
        scanf("%d",&a[i]);
        a[i]<a[0];
        a[0]=a[i];
    }
    printf("%d is a the smallest number of given number ",a[0]);
    return 0;
}