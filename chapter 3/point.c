#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the value of x and y=");
    scanf("%d %d",&x,&y);
    if (x==0 && y!=0)
    {
        printf("point is on y axis");
    }
    else if (x!=0 && y==0)
    {
        printf("point is on x axis");
    }
    else if (x==0 && y==0)
    {
        printf("point is origin");
    }
    else
    {
        printf("point is not lie on any axis");
    }
    
    
    
}