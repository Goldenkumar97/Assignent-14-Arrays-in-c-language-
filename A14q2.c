/*Write a program to calculate the average of number stored in an array of size 10
take array value from user.*/
#include"stdio.h"
int main()
{
    int a[10],i;
    int sum=0;
    float avg;
    printf("Enter a number ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
    sum=sum+a[i];
    avg=sum / 10.0;
    }
    printf("%f is the avg of ten given number ",avg);

}