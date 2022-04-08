#include<stdio.h>
void main()
{
    int l=5,b=4;
    int p=2*(l+b);
    int a=l*b;
    if (p>a)
    {
        printf("perimeter is greater than it's area");
    }
    else 
    printf("area is greater than it's perimeter");
}