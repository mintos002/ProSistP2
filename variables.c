#include <stdio.h>
//int a = 0; /* variable global */

// Esta función incrementa el valor de la variable global a en 1
int inc_a(int a) {
// int a;
 return a+1;
}

// Esta función devuelve el valor anterior
// y guarda el Nuevo valor v
int valor_anterior(int v) {
 int temp;
 // declarar aquí la variable s estática.
 static int s;
 temp = s;
 s = v;
 return s;
}

main(){
 int b = 2; /* variable local */
 int a = 0;
 a=inc_a(a);
 b=valor_anterior(b);
 printf("a= %d, b= %d\n", a, b);
 a++;
 b++;
 a=inc_a(a);
 b = valor_anterior(b);
 printf("a= %d, b= %d\n", a, b);
}
