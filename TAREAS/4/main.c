#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argu[])
{
	//argc es el numero de argumentos
	//hay que declarar la suma
	int lista[argc], suma=0;
	//se empieza con 1 porque argu[0] es ./main
	float promedio;
	for (int i = 1; i < argc; ++i)
	{
		lista[i]=atoi(argu[i]);
	}
	//este for es para sumar los elementos de la lista
	//al principio suma=0 asi que la primera vez suma=lista[i]
	for (int i = 1; i < argc; ++i){
		suma=suma+lista[i];
	}
	//en el promedio a la suma se le divide por argc-1
	promedio=(float)suma/(argc-1);
	printf("%f\n",promedio );
	return 0;
}