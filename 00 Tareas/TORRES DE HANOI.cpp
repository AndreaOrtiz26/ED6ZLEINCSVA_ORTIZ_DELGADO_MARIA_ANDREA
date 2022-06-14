#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define SOFI 10

using namespace std;

struct pila {
	int item[SOFI];
	int tope;
};
typedef struct pila PILAS;


int push(PILAS& T, int e);
int pop(PILAS& T, int& e);
int stacktop(PILAS T, int& e);
int empty(PILAS T);
void startpila(PILAS& T);


void torrecita(int n, PILAS& A, PILAS& B, PILAS& C,
	PILAS* a, PILAS* b, PILAS* c);
void mostrar(PILAS C);


int main() {
	int n;


	PILAS A, B, C;
	startpila(A);
	startpila(B);
	startpila(C);


	PILAS* a = &A;
	PILAS* b = &B;
	PILAS* c = &C;

	cout<<("\n Bienvenido! Introduzca la cantidad de discos con los que desea jugar: ");
	scanf("%d", &n);

	cout<<("\n En la Torre A contamos con discos del 1 al 7", n);
	for (int i = n; i > 0; i--)
		push(A, i);
	cout<<("\n La torre se llenoo");

	cout<<("\nLos discos de la Torre A son: ");
	mostrar(A);
	cout<<("\n\n");
	system("pause");

	torrecita(n, A, B, C, a, b, c);

	cout<<("\nLos discos de la Torre C son: ");
	mostrar(C);

	cout<<("\n\n");
	system("pause");
	return 0;
}

int push(PILAS& T, int e) {
	if (T.tope == SOFI - 1)
		return 0;
	T.item[++T.tope] = e;
	return 1;
}

int pop(PILAS& T, int& e) {
	if (empty(T))
		return 0;
	e = T.item[T.tope--];
	return 1;
}

int stacktop(PILAS T, int& e) {
	if (empty(T))
		return 0;
	e = T.item[T.tope];
	return 1;
}

int empty(PILAS T) {
	if (T.tope == -1)
		return 1;
	return 0;
}

void startpila(PILAS& T) {
	T.tope = -1;
}

void torrecita(int n, PILAS& A, PILAS& B, PILAS& C,
	PILAS* a, PILAS* b, PILAS* c) {
	int e;
	char aux, aux1;

	if (a == &A)
		aux = 'A';
	else if (b == &A)
		aux = 'B';
	else if (c == &A)
		aux = 'C';

	if (a == &C)
		aux1 = 'A';
	else if (b == &C)
		aux1 = 'B';
	else if (c == &C)
		aux1 = 'C';

	if (n == 1) {
		pop(A, e);
		push(C, e);
		printf("\nDisco %d movido de la Torre %c a la Torre %c", n, aux, aux1);
	}else {
		torrecita(n - 1, A, C, B, a, b, c);
		pop(A, e);
		push(C, e);
		printf("\nDisco %d movido de la Torre %c a la Torre %c", n, aux, aux1);
		torrecita(n - 1, B, A, C, a, b, c);
	}

}

void mostrar(PILAS C) {
	int e;
	while (pop(C, e))
		cout<<("%d", e);
		cout<<"\n\n";
		cout<<"Ortiz Delgado Maria Andrea";
}
