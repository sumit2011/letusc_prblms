#include<stdio.h>
void main()
{
    float bs,da,hr,gs;
    printf("enter basic salary of ramesh: \n");
    scanf("%f",&bs);
    da=0.4*bs;
    hr=0.2*bs;
    gs=bs+da+hr;
    printf("\n basic salary=%f",bs);
    printf("\n dearness alloowance=%f",da);
    printf("\n house rent=%f",hr);
    printf("\n gross salary=%f",gs);
}