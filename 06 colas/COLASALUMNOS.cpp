/*
Ejemplo de una cola matriculados
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//definimos nuestra cola
struct ICO{
	char clave[20];
	char nombre[30];
	float calificacion;
};
//definir el nodo
struct Nodo{
	ICO alumnos
	Nodo *siguiente;
}
//metodos
void menu();
void agregarDatos(ICO&);
void insertarDatos(ICO *&, ICO *&, ICO);
bool c_vacia(Nodo *);

int main(){
	//deftinir la cola
	ICO alumnos;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	char opc;
	
	do{
		menu();
		cin>>opcion;
		//borrar el buffer
		fflush(stdin);
		//nodo auxiliar
		Nodo *aux = frente;
		
		switch(opcion){
			case '1':
				agregarDatos(alumno);
				insertarDatos(frente, fin, alumnos);
				break;
			case '2':
				cout<<"\n CLAVE \t"<<" NOMBRE\t "<<"CALIFICACION \n";
				while (aux !=NULL){
					cout<<aux->alumnos.clave<<"\t"<<aux->alumnos.nombre<<"\t"<<aux->alumnos.calificacion<<endl;
					aux = aux->siguiente;
				}
				break
			case'3':
				cout<<"\n ayos nwn/ \n";
				break;
			default:
				cout<<"\n Opcion no valida\n";
				break;
		}
		getch();
		cout<<"Presionar una tecla para continuar\n";
		system("cls");			
	}while(opcion != '3');
	return 0;
}

void menu(){
	cout<<"Menu alumnos matriculados\n";
	cout<<"1.- Agregar datos del alumno\n";
	cout<<"2.- Mostrar datos del alumno\n";
	cout<<"3.- Salir\n";	
}


void agregarDatos(ICO &alumnos){
	cout<<"\Ingresar clave del alumno: \n";
	cin.getline(alumnos.clave, 20 '\n');
	cout<<"\Ingresar nombre del alumno: \n";
	cin.getline(alumnos.nombre, 30 '\n');
	cout<<"\Ingresar la calificacion del alumno: \n";
	cin>>alumnos.calificacion;
}


void insertarDatos(Nodo *&frente, Nodo *&fin, ICO alumnos){

//Declaramos nuevo nodo
Nodo *n_nodo = new Nodo();

//Asignar al nuevo nodo el dato a insertar
n_nodo ->alumnos = alumnos;

// debemos apuntar a donde el siguiente elemento
n_nodo->siguiente = NULL;

	if(c_vacia(frente)){
	//si la cola esta vacia nuevo nodo
	frente = n_nodo;
	}else{
		//SI la cola no esta vacia siguiente
		
		}

}

bool c_vacia(Nodo *frente){
	//si frente igual a NULL cola vacia
	return (frente == NULL )? true:false;
}

