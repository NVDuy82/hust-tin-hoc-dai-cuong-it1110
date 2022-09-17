#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 0){
        printf("Error");
        return 0;
    }
    
    double arr[n];
    double sum_negative = 0, sum_positive = 0;
    int count_negative = 0, count_positive = 0;
    for(int i = 0; i < n; ++i){
        scanf("%lf", &arr[i]);
        if(arr[i] < 0){
            sum_negative += arr[i];
            count_negative++;
        }
        if(arr[i] > 0){
            sum_positive += arr[i];
            count_positive++;
        }
    }
    
    if(count_negative == 0){
        printf("Mang khong co so am ");
    }else{
        printf("%lf ", sum_negative / count_negative);
    }
    if(count_positive == 0){
        printf("Mang khong co so duong");
    }else{
        printf("%lf", sum_positive);
    }
    
    return 0;
}