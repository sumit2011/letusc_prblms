#include<stdio.h>
void main()
{
    int y;
    printf("enter year=");
    scanf("%d",&y);
    int d;
    d=(y*365)%7;
    if (d==0)
    {
        printf("monday");
    }
    else if (d==1)
    {
        printf("tuesday");
    }
    else if (d==2)
    {
        printf("wednesday");
    }
    else if (d==3)
    {
        printf("thursday");
    }
    else if (d==4)
    {
        printf("friday");
    }
    else if (d==5)
    {
        printf("saturday");
    }
    else if (d==6)
    {
        printf("sunday");
    }
}