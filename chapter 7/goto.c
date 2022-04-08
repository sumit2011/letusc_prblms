#include<stdio.h>
void main()
{
    int goals;
    printf("enter number of goals scored against india:\n");
    scanf("%d",goals);
    if (goals<=5)
    {
        goto sos;
    }
    else
    {
        printf("about time soccer players learnt C \n");
        printf("and said goodbye to soccer\n");
        exit(1);
    }
    sos:
        printf("to err is human\n");
}