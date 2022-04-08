#include<stdio.h>
#include<math.h>
void main()
{
    int l1,l2,g1,g2;
    printf("enter l1 l2 g1 g2 respectively=");
    scanf("%d %d %d %d ",&l1,&l2,&g1,&g2);
    int D=3963*acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2-g1));
    printf("distance=%d",D);
}