//9.WAP in c to read n number of values in an array and display it in reverse order take array values from the user.
#include"stdio.h"
int main()
{
    int a[1000];
    int i,n;
    printf("Enter size of array ");
    scanf("%d",&n);
    printf("Enter ten element of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=(n-1);i>=0;i--)
    {
        printf("\nreverse array of given number is  =%d ",a[i]);
    }
    return 0;
}