#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    float l,b,r;
    char c1,c2;
    printf("on which you want to perform operations\n");
    printf("for rectangle enter r\n");
    printf("for circle enter c\n");
    scanf("%c",&c1);
    printf("whant you want to find\n");
    printf("for perimeter enter p\n");
    printf("for area enter a\n");
    scanf("%c",&c2);
    if (c1==r)
    {
        if (c2=='p')
        {
            printf("enter length= ");
            scanf("%f",&l);
            printf("enter width= ");
            scanf("%f",&b);
            float p=2*(l+b);
            printf("perimeter= %f",p);
        }
        
    }
    
}