#include<stdio.h>
void main()
{
    int n,sum,m;
    //int i=m;
    scanf("%d",&n);
    sum=0;
    for (int i = 0; i < 5; i++)
    {
        m=n%10;
        n=n/10;
        sum=sum+m;
    }
    printf("%d",sum);
}