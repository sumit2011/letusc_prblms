#include<stdio.h>
void main()
{
    int f;
    printf("enter the temp in fahrenheit= ");
    scanf("%d",&f);
    int c=(f-32)*5/9;
    printf("temp in degree celcius will be=%d",c);
}