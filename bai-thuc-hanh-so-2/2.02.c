#include<stdio.h>
int main()
{
    float a,b,max;
    scanf("%f", &a);
    scanf("%f", &b);
    if(a<b) max=b;
    else max=a;
    printf("%6.2f", max);
    return 0;
}