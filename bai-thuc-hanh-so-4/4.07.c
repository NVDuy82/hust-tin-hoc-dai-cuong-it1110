#include <stdio.h>

int main() {
    int n;
    double x, res = 1, temp = 1;
    scanf("%d%lf", &n, &x);
    
    // n > 0
    if(n <= 0){
        printf("Error");
        return 0;
    }
    
    for(int i = 0; i < n; ++i){
        temp *= -x;
        res += temp;
    }
    printf("%lf", res);
    
    return 0;
}