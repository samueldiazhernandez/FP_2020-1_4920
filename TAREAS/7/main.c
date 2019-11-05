#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
//nos ayuda a tomar valores que se enecesitan
int b= atoi(argv[1]); //La base
int e= atoi(argv[2]);//Este es el exponente
int p= pow(b,e);//Aquí se realiza la operación
printf("%i\n",p);
return 0;
}