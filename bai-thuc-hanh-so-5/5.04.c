#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // 2 <= n <=10
    if(n == 1){
        printf("0");
        return 0;
    }
    if(n > 10) n = 10;
    
    int arr[n];
    int multi, max = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
        if(i){
            multi = arr[i] * arr[i-1];
            if(multi > max){
                max = multi;
            }
        }
    }
    
    printf("%d ", max);
    
    return 0;
}