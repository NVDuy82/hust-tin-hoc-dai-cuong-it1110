#include <stdio.h>

int main(){
    int n, res = 1;
    scanf("%d", &n);
    
    if(n < 0 || n >= 8){
        printf("ERROR");
        return 0;
    }
    
    for(int i = n; i > 1; --i){
        res *= i;
    }
    printf("%d", res);
    
    return 0;
}