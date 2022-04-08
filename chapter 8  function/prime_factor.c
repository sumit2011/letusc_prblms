#include<stdio.h>

void prime_factor(int);

void main()
{
    int num;
    printf("\nenter any number=");
    scanf("%d",&num);
    prime_factor(num);
}

void prime_factor(int a)
{
    int i,j;
    printf("\nprime factor of %d=",a);
    for ( i = 2; i <= a; i++)
    {
        if (a%i==0)
        {
           for ( j = 2; j < i; j++)
           {
               if (i%j==0)
               {
                  break;
               }
           } 
           if(j==i)
           {
               printf("%d,",i);
           }
        }
    }
}//😢😢😢😢