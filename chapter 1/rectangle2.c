#include<stdio.h>
void main()
{
    int l,b,r;
    printf("enter length and width of rectangle=");
    scanf("%d  %d",&l,&b);
    int perimeter=2*(l+b);
    printf("perimater=%d\n",perimeter);
    int area2=l*b;
    printf("area=%d\n",area2);
    printf("enter radius=");
    scanf("%d",&r);
    float area=3.14*r*r;
    printf("%f",area);
}