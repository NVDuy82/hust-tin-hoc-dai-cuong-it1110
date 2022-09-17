#include <stdio.h>
#include <math.h>

char check(unsigned n){
    if(n < 2) return 0;  // 0 1 not prime number
    if(n == 2) return 1;  // 2 is prime number
    if(!(n % 2)) return 0; // even num > 2 -> not prime number
    // for remaining num -> (3 5 7 9 ....)
    // check odd divisor
    for(int i = 3; i <= round(sqrt(n)); i += 2){
        if(!(n % i)) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if(check(n))
        printf("La so nguyen to");
    else
        printf("Khong phai so nguyen to");
    
    return 0;
}