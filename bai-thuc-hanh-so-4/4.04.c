#include <stdio.h>

int get_lcm(int a, int b){
    while(a - b){
        if(a > b){
            a = a % b;
            if(a == 0) a = b;
        }else{
            b = b % a;
            if(b == 0) b = a;
        }
    }
    return a; // or b
}

int main() {
    int a, b, lcm, gcd;
    scanf("%d%d", &a, &b);
    
    // a, b > 0
    if(a <= 0 || b <= 0){
        printf("ERROR");
        return 0;
    }

    lcm = get_lcm(a, b);
    gcd = a*b / lcm;
    printf("%d\n%d", lcm, gcd);
    
    return 0;
}