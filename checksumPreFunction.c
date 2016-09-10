// checksum

#include <stdio.h>

//constant for max buffer range
#define MAX_BUFFER 100

void checkFunction (int sum, int tenthElement){
  
}

int main (void) {
  int intInput[10];
  char charInput[MAX_BUFFER];

  int sum = 0;
  int temp = 0;
  int cmpTmp = 0;

  while((scanf("%s", charInput)) != EOF){
    /*read a string of chars (%s),
    store to charInput array
    as long as it is not the end of file*/
    for (int i = 0; i < 10; i++){
      /*iterate to make check sum array
      filled with 1 digit integers*/
      temp = charInput[i] - '0';
      // temporary integer variable converts char to int
      if (temp < 0 || temp > 9){
        continue;
      }
      /*checks to see if temp is an integer between 1 and 9
        if it isn't it will skip this iteration*/
      intInput[i] = temp;
      // ith element is now value of temp
      if(i < 9){
        sum += intInput[i];
        // sum of first 9 integers
      }
    }

    cmpTmp = intInput[9];
    if (sum % 10 == cmpTmp){
      /*if rightmost digit is the modulator of
      the sum of the first 9*/
      printf("%s", charInput);
      //print array and create new line
      printf("\n");
    }
    sum = 0;
    // reset sum
  }
  return 0;
}
