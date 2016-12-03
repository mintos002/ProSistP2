#include <stdio.h>
int main(int argc, char *argv[])
{
 printf("Numero de argumentos %d \n", argc);
 
 int i;
 for (i=0; i< argc; i++){
  if((argv[i][0]=='-') & (argv[i][1]=='c')){ printf("Argumento %d es %s \n", i, "Compilar");}
  else if((argv[i][0]=='-') & (argv[i][1]=='E')){ printf("Argumento %d es %s \n", i, "Preprocesar");}
  else if(strcmp(argv[i],"-iruta")==0){ printf("Argumento %d es %s \n", i, "Incluir + ruta");}
 }
}
