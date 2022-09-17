#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
  
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0';
    
    int i;
    for(i = strlen(s) - 1; i >= 0; --i){
        if(s[i] == ' '){
            s[i] = '\0';
        }else{
            break;
        }
    }
    
    for(i = 0; i < strlen(s); ++i){
        if(s[i] == ' '){
            s[i] = 10;
        }else{
            break;
        }
    }
    
    for(int clr = 0; i < strlen(s); ++i){
        if(clr){
            if(s[i] == ' '){
                s[i] = 10;
                
            }else{
                clr = 0;
            }
        }else{
            if(s[i] == ' '){
                clr = 1;
            }
        }
    }
    
    for(i = 0; i < strlen(s); ++i){
        if(s[i] != 10){
            printf("%c", s[i]);
        }
    }

    return 0;
}