#include<stdio.h>
void main()
{
    int r,s,a;
    printf("enter the age of Ram,Shyam,Ajay=");
    scanf("%d %d %d",&r,&s,&a);  
    if (r<s && r<a)
    {
        printf("Ram is youngest");
    }
    else if (s<r && s<a)
    {
        printf("Shyam is youngest");
    }
    else
    {
        printf("Ajay is youngest");
    }
}