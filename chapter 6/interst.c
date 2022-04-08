#include<stdio.h>
#include<math.h>
void main()
{
    float p[10],r[10],n[10],q[10],a[10];
    printf("instructions\n p for princile\n r for interest\n n for number of years\n q for no of times interest applied per time period\n");
    for (int i = 0; i < 10; i++)
    {
        printf("enter p%d,r%d,n%d,q%d respectively=",i,i,i,i);
        scanf("%f %f %f %f",&p[i],&r[i],&n[i],&q[i]);
        a[i]=p[i]*pow(1+r[i]/q[i],n[i]*q[i]);
    }
    printf("a for final amount\n");
    for (int i = 0; i < 10; i++)
    {
        printf("a%d=%f\n",i,a[i]);
    }
}