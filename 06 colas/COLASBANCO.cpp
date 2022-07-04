/*
Ejemplo de cola con prioridades
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

//vamos con la estructura nodo

struct nodo{
	string dato;
	int prioridad;
	struct nodo * siguiente;
	float A;
};


//estructura de la cola
struct cola{
	nodo *delante;
	nodo *atras;
};

//funcion para crear un nodo nuevo

struct nodo *crearNodo(string x, int pri){
	//vamos a crear ese nuevo nodo
	struct nodo *nuevoNodo = new (struct nodo);
	nuevoNodo->dato=x;
	nuevoNodo->prioridad=pri;
	return nuevoNodo;
}


void encolar(struct cola &q, string valor, int priori){
	//necesito mi auxiliar
	struct nodo *aux = crearNodo(valor, priori);
	aux->siguiente=NULL;
	
	if(q.delante == NULL){
		//es el primero en encolar
		q.delante=aux;
	}else{
		(q.atras)->siguiente = aux;
	}
	//siempre el aux debe apuntar al final
	q.atras = aux;
}


void mostrarCola(struct cola q){
	//auxliar
	struct nodo *aux;
	
	aux = q.delante;
	
	cout<<"\n Fila de usuarios segun su prioridad\n";
	
	while(aux!=NULL){
		//hay datos
		cout<<" "<<aux->dato<<" cuenta con el turno:  "<<aux->prioridad<<endl;
		aux = aux->siguiente;
	} 
}


void ordenarPrioridad(struct cola &q){
	
	struct nodo *aux1, *aux2;
	int p_aux;
	string c_aux;
	
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

void insertar(struct cola &q, string c, int pri){
	
	encolar(q, c, pri);
	
	ordenarPrioridad(q);
}

void menu(){
	cout<<"\n TARJETAHABIENTES\n";
	cout<<"1.- NOMBRE DEL TARJETAHABIENTE y TIPO DE CUENTA\n";
	cout<<"2.- ASIGNAR TURNO y VER TRAJETAHABIENTE\n";
	cout<<"3.- DEPOSITO\n"; 
	cout<<"4.- Salir\n";
}

int main(){
	struct cola q;
	
	q.delante = NULL;
	q.atras = NULL;
	
	string c; //caracter del dato
	int priori; //prioridad
	int op; //opcion
	int x; //numero que devuelve para pop
	float A;
	
	do{
		menu();
		cin>>op;
		switch(op){
			case 1:
				cout<<"\n Ingrese su nombre: \n";
				cin>>c;
				cout<<"\n Digite el numero correspondiente su tipo de cuenta: \n";
				cout<<"\n 1) VIP \n 2) Empresarial \n 3) Normal \n 4) Sin cuenta \n";
				cin>>priori;
				
				insertar(q, c, priori);
				
				cout<<"\n Usuario: "<<c<<" registrado\n";
				break;
				
			case 2:
				cout<<"\n Mostrar tarjetahabientes en fila: \n";
				if(q.delante!=NULL){
					mostrarCola(q);
				}else{
					cout<<"\n La fila esta vacia\n";
				}
				break;
			case 3:
				cout<<"\n Ingrese el saldo a depositar: \n";
				cin>>A;
				if(A>5000){
						cout<<"\nIngrese una cantidad menor ";
					
				}else{
					cout<<"\n Se depositaron: "<<A<<" pesos\n";
				}
				
				break;
		
			default:
				cout<<"Ingrese una opcion valida\n";
				system("pause");
				exit(0);			
		}
		system("pause");
		system("cls");
	}while(op!=6);
	return 0;
}
