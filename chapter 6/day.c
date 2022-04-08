#include<stdio.h>
void main()
{
    int d;
    printf("enter time=");
    scanf("%d",&d);
    if (d>0 && d<12)
    {
        printf("AM\n");
    }
    else if (d==0 || d==24)
    {
        printf("midnight\n");
    }
    else if (d==12)
    {
        printf("noon\n");
    }
    else if (d>12 && d<24)
    {
        printf("PM\n");
    }
    else
    printf("wrong input");
}