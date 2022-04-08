#include<stdio.h>

void leap_year();

void main()
{
    int y;
    printf("enter year=\n");
    scanf("%d",&y);
    leap_year(y);

}
void leap_year(int a)
{
    if (a%4==0)
    {
        printf("%d is a leap year\n",a);
    }
    else
        printf("%d is not a leap year\n",a);    
}