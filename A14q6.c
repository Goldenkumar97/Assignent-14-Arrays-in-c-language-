/*WAP to sort elemets of an array of size 10 .take array values from the
 user*/
#include"stdio.h"
int main()
{
    int a[10];
    int i,j,temp;
    printf("Enter ten number ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }    
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
    printf("\n Sorting of given number is %d", a[i]);
    }
    return 0;
}