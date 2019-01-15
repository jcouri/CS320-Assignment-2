#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
  int isInt;
  int numTok = 0;
  int num3 = 0;
  int true = 0;
  int i;
  int len =0;
  char carrot[] = "> ";
  printf("Assignment #2-4, Joseph Couri, josephmcouri@gmail.com\n");
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
   len =strlen(str2);
   tok = strtok (str," ");
   while (tok != NULL){ 
     numTok++;
     tok = strtok (NULL, " ");
   }
   tok = strtok (str2," ");
   if (len == 4) {
    if (str2[0] == 'q' || str2[0] == 'Q'){
     if (str2[1] == 'u' || str2[1] == 'U'){
      if (str2[2] == 'i' || str2[2] == 'I'){
       if (str2[3] == 't' || str2[3] == 'T'){
        true = 1;
       }
      }
     }   
    }
   }
   if (true == 0) {
     if (len > 20) {
     printf("ERROR! Input string too long.\n");
    }
    else if (numTok > 2 || str2[0] == '\n'){
     printf("ERROR! Incorrect number of tokens found.\n");
     len = 0;
    }
    else{
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
      if (true == 0) {
       printf("\n");
      }
    }   
   }
  }
  return 0;
}
