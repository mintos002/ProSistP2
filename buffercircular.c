#include <stdio.h>

#define BUFSIZE 10
#define true 1
#define false 0

int ok, *x;

struct Buffer_Circ {
 int buffer[BUFSIZE];
 int bufIN, bufOUT;
 int contador;
 bufIN=0;
 bufOUT=0;
 contador=0;
};

struct Buffer_Circ C;

// Iniciar bufer
void initbufer() {
 int i;
 for(i=0; i<BUFSIZE; i++){
   //C.buffer[i] = (i + 1) % BUFSIZE;
  C.buffer[i] = -1;
  }
 C.bufIN = 0;
 C.bufOUT = 0;
 C.contador = 0;
}

// Get item
int get_item(int *x, struct Buffer_Circ *buff) {
 int nxtOUT = (*buff).bufOUT % BUFSIZE;

 if( (*buff).contador > 0){           // Si el buffer no esta vacio
   x = &(*buff).buffer[nxtOUT];       // Asignar resultado a x
   (*buff).bufOUT = (nxtOUT + 1) % BUFSIZE;            // Actualizar bufOUT
   (*buff).contador = (*buff).contador - 1; // Actualizar contador
   return 0;                         // Devolver 0 -> OK
  }
 else {                              // Si buffer esta lleno
  return -1;                         // Devolver -1 -> NOT OK
 }

}

// Put item
int put_item(int x, struct Buffer_Circ *buff) {
 int nxtIN = (*buff).bufIN % BUFSIZE;

 if( (*buff).contador < BUFSIZE ){   // Si el buffer esta vacio
  (*buff).buffer[nxtIN] = x;        // Insertar x
  (*buff).bufIN = (nxtIN + 1) % BUFSIZE;// Actualizar bufIN
  (*buff).contador = (*buff).contador + 1; // Actualizar contador
  return 0;                         // Devolver 0 -> OK
 
 }
 else {                              // Si buffer esta lleno
  return -1;                         // Devolver -1 -> NOT OK
 }
}

// Consultar si una variable Buffer_Circ está vacía
bool bc_vacio(struct Buffer_Circ *buff){
 if( (*buff).contador == 0 ) {
  return false;
 }
}

//PRINT
void print (struct Buffer_Circ *buff){
 printf("OK? = %d\n", ok );
 printf("bufIN = %d\n", (*buff).bufIN );
 printf("bufOUT = %d\n", (*buff).bufOUT );
 printf("contador = %d\n", (*buff).contador );
 int i;
 for(i=0; i<BUFSIZE; i++){
  printf("Posicion %d valor: %d\n", i, (*buff).buffer[i] );
 }
 printf("------------------------------------------------------------\n");
}

main(){
 struct Buffer_Circ akan, *ppp;
 ppp = &akan;
 print(ppp);
}
