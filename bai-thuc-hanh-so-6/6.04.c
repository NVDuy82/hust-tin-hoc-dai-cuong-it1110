#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char s[16];
    int res = 0;
  
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0';
    int len = strlen(s);
    
    for(int i = 0; i < len; ++i){
        res += pow(2, len - i - 1) * (s[i] - 48);
    }
    
    if(s[0] == '1'){
        res -= pow(2, len);
    }
    printf("%d", res);

    return 0;
}