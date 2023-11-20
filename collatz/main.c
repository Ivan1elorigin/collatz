#include "header.h"

int main() {
	int n=0, vueltas=0, cont=0;
	//Introducimos número
	printf("Introduzca un numero:\n");
	scanf_s("%d", &n);
	printf("Cuantas veces desea ejecutar el bucle?\n");
	scanf_s("%d", &vueltas);

	printf("Conjetura de Collatz\n\n");
	while (cont < vueltas) {
		n = collatz(n);
		cont++;
	}
}