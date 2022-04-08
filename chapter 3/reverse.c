#include<stdio.h>
void main()
{
    int num;
    int a[5];
    printf("enter any 5 digits number=");
    scanf ("%d",&num);
    int t=10000;
    for (int i = 0; i < 5; i++)
    {
        int q=num/t;
        int r=num%t;
        t=t/10;
        num=r;
        a[i]=q;
    }
    printf("number in reverse order is=\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d",a[i]);
    }
    
    
}