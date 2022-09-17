#include <stdio.h>

int main() {
    int n;
    double x, res = 1, temp = 1;
    scanf("%lf%d", &x, &n);
    
    if(n < 1  || x <0){
        printf("Error");
        return 0;
    }
    
    for(int i = 1; i <= n; ++i){
        temp *= x / i;
        res += temp;
    }
    printf("%.4lf", res);
    
    return 0;
}