// Exercise RS-8: Write a C program to play a guessing game with the user that is equivalent to the Python program below. Your program should use a while loop and multi-way branch if (i.e. use else if).

#include <stdio.h>
int main() {
   int guess;
  while(scanf("%d", &guess) !=EOF) {
 	if(guess == 42) {
    	printf("Nice work!\n");
       break;
    }
    else if (guess < 42) 
    	printf("Too low - guess again\n");
    else 
      printf("Too high - guess again\n");
    
  }
}