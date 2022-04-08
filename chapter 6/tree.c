#include<stdio.h>
void main()
{
    int i,j,n;
    int d=1;
    printf("enter rows= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=(n);j++)
        {
            printf("\t");
            if(j>=n-(i) && j<=n+(i))
            {
                printf("%d\t",d);
                d++;
            }
        }
        printf("\n");
    }
}