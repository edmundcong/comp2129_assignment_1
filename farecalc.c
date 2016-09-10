/* Fare Calculator */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//constant for max buffer range
#define MAX_BUFFER 100

/*Global Variables
These variables are used in main(),
fareCalc() or both function*/

//coordinate variables
int x1 = 0;
int y1 = 0;
int x2 = 0;
int y2 = 0;

int fare = 0;

//j iterator
int j = 1;

int planeArray[MAX_BUFFER];

/*fareCalc function:
calculates the Manhattan DIstance.
Pass the pointer pArray because fareCalc will
follow that pointer to main()'s memory
(located in the stack) and alter the contents
of planeArray there.'*/
int fareCalc(int A, int B, int C, int D, int *pArray){
  x1 = (A*planeArray[j-3]) + (B*planeArray[j-2]);
  y1 = (C*planeArray[j-3]) + (D*planeArray[j-2]);
  x2 = (A*planeArray[j-1]) + (B*planeArray[j]);
  y2 = (C*planeArray[j-1]) + (D*planeArray[j]);
  fare = abs((x1-x2)+(y1-y2));
  return fare;
}

int main(int argc, char *argv[]){

  //temp array used for scanf reading
  int tempArray [MAX_BUFFER];
  //value of i does not change or else garbage data is printed
  const int i = 0;
  //pointer for strtol to the next non-white space character
  char *strtolPtr;

  //A,B,C,D Constants
  int A = strtol(argv[1], &strtolPtr, 10);
  int B = strtol(argv[2], &strtolPtr, 10);
  int C = strtol(argv[3], &strtolPtr, 10);
  int D = strtol(argv[4], &strtolPtr, 10);

  /*scan integers while not end-of-file, initialises current
  integer to j'th value of planeArray*/
  while((scanf("%d", tempArray)) != EOF){
    planeArray[j] = tempArray[i];
    /*fare is calculated at every 4th element
    meaning that it only uses the current x1,x2,y1,y2*/
    if (j % 4 == 0){
      //call fareCalc function with given arguments
      fareCalc(A, B, C, D, planeArray);
      printf("%d\n", fare);
    }
    j++;
  }
  return 0;
}
