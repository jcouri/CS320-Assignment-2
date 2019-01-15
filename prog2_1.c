#include <stdio.h>
#include <string.h>

int main (){
  printf("Assignment #2-1, Joseph Couri, josephmcouri@gmail.com\n");
  char str[256];
  scanf("%65[^\t\n]", str);
  char * tok;
  tok = strtok (str," ");
  while (tok != NULL){
    printf ("=%s=\n",tok);
    tok = strtok (NULL, " ");
  }
  return 0;
}
