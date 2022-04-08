#include<stdio.h>
#include<math.h>
void main()
{
    float s1,s2,s3;
    printf("Enter three sides of a triangle= ");
    scanf("%f%f%f",&s1,&s2,&s3);
    float s=(s1+s2+s3)/2;
    float area;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("area=%f",area);
}