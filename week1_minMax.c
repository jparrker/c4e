#include <stdio.h>
#include <stdlib.h>

int main() {
  	char line[1000];
  	int num, min, max;
  	while(1) {
    gets(line);
     if(strcmp(line, "done") == 0) {
     	break; 
     }
     if(strcmp(line, "NULL") == 0){
     	break; 
     }
     num = atoi(line);
      if(num < min) {
      	min = num;
      }
      if(num > max) {
      	max = num;	
      }
    }
  printf("Maximum %d\n", max);
  printf("Minimum %d\n", min);
}