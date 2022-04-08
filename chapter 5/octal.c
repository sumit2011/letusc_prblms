#include<stdio.h>
void main()
{
    int num;
    printf("enter number which you want to convert into octal=");
    scanf("%d",&num);
    int rem,b;
    b=num;
    int i=0;
    int a[10];
    while (b!=0)
    {
        rem=num%8;
        printf("%d ",rem);
        b=num/8;
        num=b;
        a[i]=rem;
        i++;
    }
    printf("\n");
    for (int j = i-1 ; j > -1 ; j--)
    { 
        printf("%d",a[j]);
    }
}