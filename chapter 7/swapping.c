#include<stdio.h>
void main()
{
    //while (1)
    {     
        int a,b;
        printf("enter value of a and b respectively=\n");
        scanf("%d %d",&a,&b);
        printf("a=%d b=%d \n",a,b);
        a=a*b;
        b=a/b;
        a=a/b;
        printf("a=%d b=%d \n",a,b);
    } 
    return main();
}