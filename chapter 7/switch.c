#include<stdio.h>
#include<stdlib.h>
void main()
{
    int choice,num,i,fact;
    while(1)
    {
        printf("1.factorial\n");
        printf("2.prime\n");
        printf("3.odd/even\n");
        printf("4.exit\n");
        printf("your choice?\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter number\n");
            scanf("%d",&num);
            fact=1;
            for(i=1;i<=num;i++)
            {
                fact=fact*i;
            }
            printf("factorial value=%d\n",fact);
            break;
        case 2:
            printf("enter number:\n");
            scanf("%d",&num);
            for (i = 2; i < num; i++)
            {
                if (num%i==0)
                {
                    printf("not a prime number\n");
                    break;
                }
            }
            if (i==num)
            {
                printf("prime number\n");     
            }
            break;
        case 3:
            printf("\nenter number:");
            scanf("%d",&num);
            if (num%2==0)
            {
                printf("even number\n");    
            }
            else
                printf("odd number\n");
            break;
        case 4:
            exit(0);
            
        default:
            printf("wrong choice\n");
        }
    }   
}