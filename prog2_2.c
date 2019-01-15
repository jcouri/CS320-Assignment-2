#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
  int isInt;
  char term;
  int i;
  char str1[] = ">";
  printf("Assignment #2-2, Joseph Couri, josephmcouri@gmail.com\n");
  printf("%s", str1);
  char str[256];
  scanf("%65[^\t\n]", str);
  char * tok;
  tok = strtok (str," ");
  while (tok != NULL){ 
    isInt = 1;
    for (i=0; tok[i]; i++) {
     if (!isdigit(tok[i])){
     isInt = 0;
     }
    }
    if (isInt!=0){
     printf("INT ");
    }
    else {
     printf("STR ");
    }
    tok = strtok (NULL, " ");
  }
  printf("\n");
  return 0;
}
