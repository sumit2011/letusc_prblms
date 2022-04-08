#include<stdio.h>
void main()
{
    int num=0,a[2];
    int t=100,y,rem;
    while (num<500)
    {
        for (int i = 0; i < 3; i++)
        {
            y=num/t;
            rem=num%t;
            t=t/10;
            num=rem;
            a[i]=y;
        }
        int x;
        x=a[0]*a[0]*a[0]+a[1]*a[1]*a[1]+a[2]*a[2]*a[2];
        if (num==x)
        {
            printf("%d is an armstrong number\t",&num);
        } 
        num++;  
    }
}