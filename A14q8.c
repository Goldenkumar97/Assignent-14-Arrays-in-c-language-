//Write a program to find second smallest number in an array take array value from the user.
#include"stdio.h"
#include"limits.h"
int main()
{
    int a[5];
    int small,i,second;
    printf("Enter five number of element ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(   small >a[i]   )
        {
            second=small;
            small=a[i];
        }
        else if(second>a[i] && a[i]!=small)
        {
            second=a[i];
        }
    }
    printf("second smallest number is %d ",second);
    return 0;
}


