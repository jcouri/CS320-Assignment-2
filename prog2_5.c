#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
  int isInt;
  int numTok = 0;
  int first = 0;
  int true = 0;
  int i;
  int len =0;
  int numInt = 0;
  int numStr = 0;
  char carrot[] = ">";
  printf("Assignment #2-5, Joseph Couri, josephmcouri@gmail.com\n");
  while (true ==0) {
   char str[256];
   char * tok;
   char str2[256];
   numTok = 0;
   first = 0;
   numInt = 0;
   int numStr = 0;
   printf("%s",carrot);
   scanf("\r%256[^\t\n]", str);
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
    if (numTok > 2){
     printf("ERROR! Incorrect number of tokens found.\n");
     len = 0;
    }
    else if (len > 65) {
     printf("ERROR! Input string too long.\n");
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
          if (first == 0) {
          numInt--;
          }
          else {
          numInt++;
          }
         }       
         else {
          numStr++;
         }
         first++;
         tok = strtok (NULL, " ");
      }
      
      if(numTok == 2){
       if(numInt != 0) {
        if(numInt == -1){
         printf("INT ");
        }
        printf("STR ");
        if(numInt == 1){
         printf("INT ");
        }
       }
       else{
        printf("ERROR! Expected STR INT. ");
       }
      }
      if(numTok == 1){
       if(numStr == 1){
        printf("STR ");
       }
       else{
        printf("ERROR! Expected STR.");
       }
      }
       printf("\n");
    }   
   }
  }
  return 0;
}
