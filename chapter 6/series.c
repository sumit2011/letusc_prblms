#include<stdio.h>
#include<math.h>
void main()
{
    float x;
    printf("enter the value of x=");
    scanf("%f",&x);
    float a[10];
    for (int i = 1; i < 8; i++)
    {
        a[i]=pow((x-1)/x,i)/2;
    }
    float sum=0;
    for (int i = 1; i < 8; i++)
    {
        sum=sum+a[i];
    }
    printf("sum of first seven terms=%f",sum);
}