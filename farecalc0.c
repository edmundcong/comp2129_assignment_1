// fare calculator

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BUFFER 100
//constant for max buffer range

int main(int argc, char *argv[]){

  int tempArray[MAX_BUFFER];
  int coordsArray[MAX_BUFFER];
  //two arrays used for streaming

  int j = 1;
  int i = 0;
  /*iterators. value of i does not change
    or else garbage data is printed*/
  int fare = 0;

  int x1 = 0;
  int y1 = 0;
  int x2 = 0;
  int y2 = 0;
  //coordinate variables

  char *strtolPtr;
  //pointer for strtol to the next non-white space character

  int A = strtol(argv[1], &strtolPtr, 10);
  int B = strtol(argv[2], &strtolPtr, 10);
  int C = strtol(argv[3], &strtolPtr, 10);
  int D = strtol(argv[4], &strtolPtr, 10);
  //A,B,C,D Constants

  while((scanf("%d", tempArray)) != EOF){
    coordsArray[j] = tempArray[i];
    /*scan integers while not end-of-file, initialises current
    integer to j'th value of non-scanf array*/
    if (j % 4 == 0){
      /*fare is calculated at every 4th element
      meaning that it uses the current x1,x2,y1,y2*/
      x1 = (A*coordsArray[j-3]) + (B*coordsArray[j-2]); //make these 1 function
      y1 = (C*coordsArray[j-3]) + (D*coordsArray[j-2]);
      x2 = (A*coordsArray[j-1]) + (B*coordsArray[j]);
      y2 = (C*coordsArray[j-1]) + (D*coordsArray[j]);
      fare = abs((x1-x2)+(y1-y2));
      printf("%d\n", fare);

    }
    j++;
  }

  return 0;
}
