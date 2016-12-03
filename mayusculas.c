#include <stdio.h> 
#define TAM_CADENA 200
main() {
 // Puntero a caracter para copiar las cadenas
 char *p1, *p2;
 // A) Definir las variables cadena y cadena2
 char cadena[TAM_CADENA];
 char cadena2[TAM_CADENA];
 // B) Leer cadena de consola
 printf("Introduce una cadena:\n");
 scanf("%s", cadena);

 // C) Convertir a mayúsculas
 p1 = cadena;
 p2 = cadena2;
 while (*p1 != '\0') {
  // Copiar p1 a p2 restando 32
  if(*p1 >= 'A' && *p1 <= 'Z'){// Caracter en mayusculas
   // Copiar directament
   *p2=*p1;
  } else {
   // Restar 32
   *p2=*p1-32;
  }
  // Avanzar el puntero
  p1++;
  p2++;
 }
 // Acordarse de poner el cero final en cadena2
 *p2='\0';
 // D) Sacar por consola la cadena2.
 printf("El resultado es: %s\n", cadena2);
}
