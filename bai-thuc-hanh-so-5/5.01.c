#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 0){
        printf("Error");
        return 0;
    }
    
    int arr[n];
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for(int i = n - 1; i >= 0; --i){
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n%d", sum);
    
    return 0;
}