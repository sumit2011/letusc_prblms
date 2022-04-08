#include<stdio.h>
#include<math.h>
void main()
{
    int x,y;
    for (int i = 0; i < 20; i++)
    {
        
        for (int j = 0; j < 20; j++)
        {
            x=pow(i,3);
            y=pow(j,3);
            printf("%4d^3+%4d^3=%4d\n",i,j,x+y);
               
        }   
    }
}