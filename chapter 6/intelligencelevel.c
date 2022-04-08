#include<stdio.h>
void main()
{
    float i,y,x;
    for ( y = 1; y <= 6; y=y+0.5)
    {
        for ( x = 5.5; x <= 12.5; x=x+0.5)
        {
            i=2+y+0.5*x;
            printf("y=%.1f\tx=%.1f\ti=%.2f\n",y,x,i);
        }   
    }
}