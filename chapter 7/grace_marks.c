#include<stdio.h>
#include<stdlib.h>
void main()
{
    int class,f;
    while (1)
    {
        printf("enter class of any student and no of subject in which he is failed=\n");
        scanf("%d %d",&class,&f);
        switch (class)
        {
        case 1:
            if (f>3)
            {
                printf("do not get any grace\n");
            }
            else
                printf("get grace of 5 marks per subject\n");
            break;
        case 2:
            if (f>2)
            {
                printf("do not get any grace\n");
            }
            else
                printf("get grace of 4 marks per subject\n");
            break;
        case 3:
            if (f>1)
            {
                printf("do not get any grace\n");
            }
            else
                printf("get grace of 5 marks\n");
            break;
        case 4:
            exit(0);
        default:
            printf("wrong input\n");
        }
    }
}