#include<stdio.h>
#include<math.h>
void main()
{
    int w,h;
    printf("enter weight and height respectively=");
    scanf("%d %d",&w,&h);
    float bmi;
    bmi=(float)w/pow(h,2);
    if (bmi<15)
    {
        printf("BMI category is starvation");
    }
    else if (15<bmi<17.5)
    {
        printf("BMI category is anorexic");
    }
    else if (17.6<bmi<18.5)
    {
        printf("BMI category is underweight");
    }
    else if (18.6<bmi<24.9)
    {
        printf("BMI category is ideal");
    }
    else if (25<bmi<25.9)
    {
        printf("BMI category is overweight");
    }
    else if (30<bmi<30.9)
    {
        printf("BMI category is obese");
    }
    else if (bmi>=40)
    {
        printf("BMI category is morbidly obese");
    }
    else
    printf("wrong input");
}