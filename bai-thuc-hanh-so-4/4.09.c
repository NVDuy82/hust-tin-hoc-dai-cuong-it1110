#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, res = 0;
    scanf("%lf%d", &x, &n);
    
    if(n < 1  || x < 0){
        printf("Error");
        return 0;
    }
    
    for(int i = 1; i <= n; ++i){
        res = sqrt(x + res);
    }
    printf("%.4lf", res);
    
    return 0;
}