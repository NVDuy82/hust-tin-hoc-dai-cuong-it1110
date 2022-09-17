#include <stdio.h>

int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    
    printf("%lf", a * b * (1 + c/100));
    return 0;
}