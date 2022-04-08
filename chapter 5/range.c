#include<stdio.h>
void main()
{
    int a[100],count;
    printf("how many numbers you want to enterd=");
    scanf("%d",&count);
    for (int i = 0; i < count; i++)         //take input
    {
        scanf("%d",&a[i]);
    }
    int num=a[0],num2=a[0];
    for (int i = 0; i < count; i++)         //to find maximum
    {
        if (num<a[i])
        {
            num=a[i];
        }
    }
    printf("\n max=%d",num);
    for (int i = 0; i < count; i++)         //to find minimum
    {
        if (num2>a[i])
        {
            num2=a[i];
        }
    }
    printf("\n min=%d",num2);
    int c=num-num2;                         //to find range
    printf("\n range=%d",c);
} 