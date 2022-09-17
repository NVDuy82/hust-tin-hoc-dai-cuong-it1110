#include <stdio.h>

int main(){
    double x, y;
    scanf("%lf%lf", &x, &y);
    
    printf("%lf\n%lf\n%lf", x*x + y*y, (x + y)*(x + y), (x - y)*(x - y));
    return 0;
}