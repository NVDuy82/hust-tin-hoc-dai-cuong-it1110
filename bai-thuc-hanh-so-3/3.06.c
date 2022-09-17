#include <stdio.h>
#include <math.h>

int main(){
    double x, y, f = 0;
    scanf("%lf%lf", &x, &y);
    for(int i = 0; i <= 6; ++i){
        f += pow(x, i) * pow(y, 6-i);
    }
    printf("%.4lf", f);
    
    return 0;
}