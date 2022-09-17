#include<stdio.h>
int main()
{
    int a, b, c, tong;
    scanf("%d%d%d", &a, &b, &c);
    tong = a+b+c;
    printf("%d\n", tong);
    printf("%lf", tong/3.0);
    return 0;
}