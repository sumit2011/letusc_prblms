#include<stdio.h>

int main()
{
    int a=1189,b=841;
    for(int i=0;i<8;i++)
    {
        printf("\nsize of paper A%d is %d*%d",i,a,b);
        if(a>b)
            a=a/2;
        else
            b=b/2;
    }  
}