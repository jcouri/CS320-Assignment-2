#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
  int isInt;
  int numTok = 0;
  int true = 0;
  int i;
  char carrot[] = "> ";
  printf("Assignment #2-3, Joseph Couri, josephmcouri@gmail.com\n");
  while (true ==0) {
  char str[256];
  char * tok;
  char str2[256];
  numTok = 0;
  printf("%s",carrot);
  *str = '\0';
  fgets(str, sizeof str, stdin);
  if (strlen(str) != 1){
      str[strlen(str)-1] = '\0';
  }
  strcpy(str2, str);
  tok = strtok (str," ");
  while (tok != NULL)
  { 
    numTok++;
    tok = strtok (NULL, " ");
  }
  tok = strtok (str2," ");
  if (numTok > 2 || str2[0] == '\n'){
   printf("ERROR! Incorrect number of tokens found.\n");
  }
  else{
   while (tok != NULL)
     { 
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
   true =1;
   }
  }
  return 0;
}

