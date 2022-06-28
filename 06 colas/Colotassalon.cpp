#include <iostream>
#include <stdlib.h>

using namespace std;

//vamos con la estructura nodo

struct nodo{
	char dato;
	int prioridad;
	struct nodo *siguiente;
};


//estructura de la cola
struct cola{
	nodo *delante;
	nodo *atras;
};

//funcion para crear un nuevo nodo

struct nodo *crearNodo(char x, int pri){
	//vamos a crear ese nuevo nodo
	struct nodo *nuevoNodo = new (struct nodo);
	nuevoNodo ->dato=x;
	nuevoNodo->prioridad=pri;
	return nuevoNodo;
}


void encolar(struct cola &q, int priori){
	//necesito mi auxiliar
	struct nodo *aux = crearNodo(valor, priori);
	aux->siguiente=NULL;
	
	if(q.delante == NULL){
		//Es el primero en encolar
		q.delante = aux;
		
	}else{
		(q.atras)->siguiente=aux;
	}
	//siempre el auxiliar debe apuntar al final
	q.atras=aux;
	
}

void mostrarCola(struct cola q){
	//auxliar
	struct nodo *aux;
	
	aux = q.delante;
	cout<<"\n caracter de prioridad\n";
	
	while(aux!=NULL){
		//hay datos
	cout<<"  "<<aux->dato<<" | "<<aux->prioridad<<endl;
	aux = aux->siguiente;
	
	}
}

void ordenarPrioridad(struct cola &q){
	//criterio de 0 como mayor
	//el numero mayor es la mas alta
	
	struct nodo *aux1, *aux2;
	int p-aux;
	char c_aux;
	
	aux1 = q.delante;
	
	while(aux1->siguiente != NULL){
		aux2 = aux1->siguiente;
		while(aux2!=NULL){
			if(aux1->prioridad > aux2->prioridad){
				p_aux = aux1->prioridad;
				c_aux = aux1->dato;
				
				aux1->prioridad = aux2->prioridad;
				aux1->dato = aux2->dato;
				
				aux2->prioridad = p_aux;
				aux2->dato = c_aux;
			}
			aux2=aux2->siguiente;
		}
		aux1 = aux1->siguiente;
	}
}
