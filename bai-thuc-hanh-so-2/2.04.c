#include<stdio.h>
int main()
{
    float x, y, max;
    scanf("%f%f", &x, &y);
    if(x<y) max = y;
    else max = x;
    printf("%6.2f", max);
    return 0;
}