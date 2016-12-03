#include <stdio.h>

#define TAM_FILA 100
#define NUM_FILAS 10

struct FILA {
 float datos[TAM_FILA];
 float suma;
};
//A) Define una variable filas que sea un vector de estructuras FILA de tamaño NUM_FILAS
struct FILA filas[NUM_FILAS];

void suma_fila(struct FILA *pf){
 // B) Implementar suma_fila
 int i;
 float count = 0; // Iniciamos el sumador a 0
 for(i=0; i<TAM_FILA; i++) { // Recorremos los datos de la fila
  count = (*pf).datos[i] + count; // Recorremos los datos de la fila y sumamos el sumador
 }
 (*pf).suma = count; // Asigtamos el resultado de la suma a la suma de la estructura FILA
}

// Inicia las filas con el valor i*j
void inicia_filas() {
 int i, j;
 for (i=0; i<NUM_FILAS; i++){
  for (j=0; j<TAM_FILA; j++){
   filas[i].datos[j]=(float)i*j;
  }
 }
}

main(){
 int i;
 float suma_total = 0; // Iniciamos la suma total

 inicia_filas();
 // C) Completar bucle
 suma_total = 0;
 for (i = 0; i<NUM_FILAS; i++){
  // Llamar a suma_fila
  struct FILA *pf; // Se crea un puntero FILA
  pf = &filas[i];  // Apuntamos a la fila del conjunto de filas
  suma_fila(pf);   // Llamamos al metodo suma_fila con el puntero creado
  printf("La suma de la fila %u es %f\n", i, filas[i].suma);
  // Sumar la fila a suma_total
  suma_total = filas[i].suma + suma_total;
 }
 printf("La suma final es %f\n", suma_total);
}
