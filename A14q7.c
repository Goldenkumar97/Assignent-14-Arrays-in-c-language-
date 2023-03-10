//7.WAP to find second largest in an array .take input from user.
#include"stdio.h"
#include"limits.h"
int main()
{
 int a[5];
 int i,first,second;
 printf("Enter the five element of array ");
 for(i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }   
    for(i=0;i<5;i++)
    {
        if( a[i] > first )
        {
        second=first;
        first=a[i];
        }
        else if( a[i] >second && a[i]< first )
        {
        second=a[i];
        }
    }
 printf("second number of array is =%d",second);

 return 0;
}