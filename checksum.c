/* Check Sum */

#include <stdio.h>

//constant for max buffer range
#define MAX_BUFFER 100

/*Global Variables
These variables are used in main(),
checkFunction() or both function*/

int sum = 0;
//cmpTmp stores 10th array element
int cmpTmp = 0;
char charInput[MAX_BUFFER];

void checkFunction (int sum, int tenthElement){
  /*if rightmost digit is the modulator of
  the sum of the first 9*/
  if (sum % 10 == tenthElement){
    //print array and create new line
    printf("%s\n", charInput);
  }
}

int main (void) {
  int intInput[10];
  int temp = 0;

  /*read a string of chars (%s),
  store to charInput array
  as long as it is not the end of file*/
  while((scanf("%s", charInput)) != EOF){
    /*iterate to make check sum array
    filled with 1 digit integers*/
    for (int i = 0; i < 10; i++){
      // temporary integer variable converts char to int
      temp = charInput[i] - '0';
      /*checks to see if temp is an integer between 1 and 9
      if it isn't it will skip this iteration*/
      if (temp < 0 || temp > 9){
        continue;
      }
      // ith element is now value of temp
      intInput[i] = temp;
      if(i < 9){
        // sum of first 9 integers
        sum += intInput[i];
      }
    }

    //cmpTmp is last (counted) array element (its 10th)
    cmpTmp = intInput[9];
    //function check call
    checkFunction(sum, cmpTmp);

    sum = 0;// reset sum and cmpTmp
    cmpTmp = 0;
  }
  return 0;
}
