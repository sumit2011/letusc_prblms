#include<stdio.h>
#include<math.h>

float power(float,float);

void main()
{                         //😎😐🤑🤤😴😒🤤😝😴😓😔☹️😦😧😨
    float num1;
    float num2;
    float result;
    printf("\nenter number and power:\n");
    scanf("%f %f",num1,num2);
    result=power(num1,num2);
    printf("%.2f to the power %.2f=%.2f",num1,num2,result);
}

float power(float num1,float num2)
{
    float result;
    result=pow(num1,num2);
    return(result);
}