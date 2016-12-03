#include <stdio.h>
#include "area.h" //esta en directorio actual

#define PI 3.1416
float area(float radio);
main() {   
   float are, radio;
   radio = 10;   
   are = area(radio);   
   printf("Area del circulo de radio %f es %f\n", radio, are); 
}

