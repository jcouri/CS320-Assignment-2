#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, char *argv[]){
  int numTries = 0;
  int isInt;
  int numTok = 0;
  int first = 0;
  int start = 1;
  int true = 0;
  int i;
  int len =0;
  int numInt = 0;
  int numStr = 0;
  char carrot[] = ">";
  printf("Assignment #2-6, Joseph Couri, josephmcouri@gmail.com\n");
  if( argc == 2 ) {
    for (i=0; argv[1][i]; i++) {
     if (!isdigit(argv[1][i])){
      start = 0;
     }
    }
    if (start == 1) {
       while (true ==0) {
        char str[256];
        char * tok;
        char str2[256];
        numTok = 0;
        first = 0;
        numInt = 0;
        int numStr = 0;
        int h = strlen(argv[1]);
        if (h ==1){
         if (numTries == (argv[1][0] - '0')){
          true=1;
         }
        }
        if (h ==2){
         if (numTries == (argv[1][0] - '0')*10 +(argv[1][1] - '0')){
          true=1;
         }
        }
        if (true == 0){
        printf("%s",carrot);
        scanf("\r%256[^\t\n]", str);
        numTries++;
        len = strlen(str2);
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
       }
       
    }
    else {
     printf("ERROR! Expected integer argument.\n");
    }
   }
   else {
      printf("ERROR! Program 6 accepts 1 command line argument.\n");
   }
  return 0;
}