#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5;
    printf("\nenter marks of only 5 subjects= ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    int agg=s1+s2+s3+s4+s5;
    float percentage=agg/5;
    printf("\naggregate marks=%d",agg);
    printf("\npercentage=%f",percentage);
}