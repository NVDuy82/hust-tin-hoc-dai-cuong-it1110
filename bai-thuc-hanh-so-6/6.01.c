#include <stdio.h>
#include <string.h>

void sort(char *str){
  int l = strlen(str);
  for(int i = l - 1; i > 0; --i){
    for(int j = 0; j < i; ++j){
      if(str[j] > str[j+1]){
        char temp = str[j];
        str[j] = str[j+1];
        str[j+1] = temp;
      }
    }
  }
}

int main() {
  char str1[100];
  char str2[100];
  char res[200] = "";
  int count[200];
  
  fgets(str1, sizeof(str1), stdin);
  str1[strlen(str1) - 1] = '\0';
  fgets(str2, sizeof(str2), stdin);
  str2[strlen(str2) - 1] = '\0';
  
  strcpy(res, str1);
  strcat(res, str2);
  sort(res);

  char pre = '\0';
  int cur = -1;
  int len = strlen(res);  
  for(int i = 0; i < len; ++i){
    if(res[i] == pre){
      count[cur] += 1;
    }else{
      printf("%c", res[i]);
      count[++cur] = 1;
      pre = res[i];
    }
  }  
  for(int i = 0; i <= cur; ++i){
    printf("\n%d", count[i]);
  }
  
  return 0;
}