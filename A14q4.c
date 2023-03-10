/* WAP to to find the greatest number stored in a array of size 10 take 
array from the user */
#include"stdio.h"
int main()
{
    int a[10],i;
    printf("Enter  ten number ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        a[i]>a[0];
        a[0]=a[i];
    }
    printf("greatest number is %d ",a[0]);
}