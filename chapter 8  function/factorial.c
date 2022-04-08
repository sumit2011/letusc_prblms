#include<stdio.h>

int factorial();

int factorial(int num)
{
    int fact=1;
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    return(fact);
}

void main()
{
    int num,fact;
    printf("\nenter number:\n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial of %d is:%d\n",num,fact);
}

