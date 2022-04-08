#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    printf("enter any 5digits number=");
    scanf("%d",&num);
    
    int t=10000;
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        int q=num/t;
        int r=num%t;
        t=t/10;
        num=r;
        sum=sum+q;  
    }
    printf("sum of all digits= %d",sum);
    
}