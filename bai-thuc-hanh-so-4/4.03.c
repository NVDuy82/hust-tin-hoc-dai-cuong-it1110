#include <stdio.h>

int main() {
    int n, res = 0;
    scanf("%d", &n);
    
    // 0 < n < 1000
    if(n <= 0 || n >= 1000){
        printf("ERROR");
        return 0;
    }

    while(n){
        res += n % 10;
        n = n / 10;
    }
    printf("%d", res);
    
    return 0;
}