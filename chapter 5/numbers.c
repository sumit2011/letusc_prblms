#include<stdio.h>
void main()
{
    int a[100];
    int num,x;
    printf("how many nubers you want enter=");
    scanf("%d",&x);
    printf("enter numbers=");
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&num);
        a[i]=num;
    }
    int count=0,count2=0,count3=0;
    for (int i = 0; i < x; i++)
    {
        a[i];
        if (a[i]>0)
            count++;
        else if (a[i]<0)
        {
            count2++;
        }
        else
            count3++;
    }
    printf("\nnos of positive number=%d",count);
    printf("\nnos of negative number=%d",count2);
    printf("\nnos of zeros number=%d",count3);
}