#include<stdio.h>
void main()
{
    float d;
    printf("enter distance in kilometers= ");
    scanf("%f",&d);
    float meter=d*1000;
    float feet=d*3280.84;
    float inch=d*39370.1;
    float centi=d*1000000;
    printf("\ndistance in kilometers=%f",d);
    printf("\ndistance in meters=%f",meter);
    printf("\ndistance in feets=%f",feet);
    printf("\ndistance in inches=%f",inch);
    printf("\ndistance in centimeters=%f",centi);
}