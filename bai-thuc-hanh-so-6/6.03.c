#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100], alpha, digit;
  
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0';
    int len = strlen(s);
    
    for(int i = 0; i < len; ++i){
        if(isalpha(s[i])){
            alpha++;
        }else if(isdigit(s[i])){
            digit++;
        }
    }
    
    if(alpha == digit){
        puts("0");
    }else if(alpha > digit){
        puts("1");
    }else{
        puts("2");
    }

    return 0;
}