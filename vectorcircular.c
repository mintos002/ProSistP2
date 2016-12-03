#include <stdio.h>

#define BUFERSIZE 40

int bufer[BUFERSIZE];

// Iniciar bufer
void initbufer() {
 int i;
 for(i=0; i<BUFERSIZE; i++){
  if(i == BUFERSIZE-1){
   bufer[i] = BUFERSIZE - BUFERSIZE;
  }
  else {
   bufer[i] = i + 1;
  }
 }
}

main () {
 int *p, i;
 initbufer();

 p = bufer;

 for(i=0; i<BUFERSIZE; i++){
  printf("Position %d value %d\n", &p[i], *(p + i) );
  
 }
}
