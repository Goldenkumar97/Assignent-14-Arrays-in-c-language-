//WAP in c to copy the elements of one array into another array.take aaray from the user.
#include"stdio.h"
int main()
{
    int a[1000];
    int n,i,j[1000],flag;
    printf("Enter size of an array ");
    scanf("%d",&n);
    printf("Enter elements of an array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       printf(" %d ",a[i]); 
    }
    for(i=0;i<n;i++)
    {
        j[i] = a[i];
        printf(" \ncopy elements of array is = %d ",j[i]);
    }
    return 0;
}
