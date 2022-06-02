#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>

/*

stdio es la libreria estadar de ++
para el manejo de entradas y salida en consola 

stdlib es la libreria estandar de estructuras
de datos en c++ ara listas, pilas, colas, arboles 
y grafoss

conio es la libreria standar para manejo de 
manipulacion de la pantalla, pausa, colores, 
manipulacion de ventanas

 */

using namespace std;

//la definicion de la lista

struct dato{
	int i;
	dato *s;//nodo siguiente
}*a, *i, *p, *e;

//metodos

int buscar(int d);
void insertar(void);
void mostrar(void);
void(borrar);
void menu(void);
//void guardar(void);
//void cargar(void);

//principal
main(){
	menu();
}

//menu

void menu(void){
	int opc, d;
	
	do{
		
	//IMPRIMIR EL MENU
	cout<<"ejemplo de una lista con apuntadores";
	cout<<"\n 1.- Buscar datos:";
	cout<<"\n 2.- insertar datos:";
	cout<<"\n 3.- mostrar datos:";
	cout<<"\n 4.- Borrar datos:";
	cout<<"\n 5.- Guardar datos en un archivo: ";
	cout<<"\n 6.- Cargar datos en un archivo: ";
	cout<<"\n 7.- Salir";
	cout<<"\n Seleccione la opcion deseada.";
	cin>>opc;
	
	switch(opc){
		case 1:
			//Buscar
			cout<<"\n Ingresa el dato a buscar: ";
			cin>>da;
			if(buscar(da)){
				cout<<"Dato si existe wiiii";
			}
			else{
				cout<<"Dato no existe solo juguito contigo T-T";
				getch(); //pausa
			}
			break;
				
		case 2:
			//Insertar
			cout<<"\n Ingresa el dato: ";
			cin>>da;
			insertar(da);
			break;
			
		case 3:
			//mostrar
			mostrar();
			break;
			
		case 4:
			//borrar
			borrar();
			break;
			
		case 5:
			//guardar
			//guardar();
			break;
			
		case 6:
			//cargar
			//cargar();
			
		case 7:
			//Salir
			cout<<"\n ayos, gracias uwu";
			getch;
			//antes de salir del programa
			//hay que borrar todos los datos
			//de la lista
			p = i;
			while(p){
				a = p;
				p = p->s;
				delete(a);
			}
			//Salir
			exit(0);
			
		default:
			cout<<"\n Aprenda a leer opcion no valida";
			getch();
		}
	}while(opc);
	
}

//mostrar

void mostrar(void){
	int cont =1;
	//Saber si hay una lista
	if(!i){
		coutt<<"No hay lista para mostrar";
		getch();
		return;
	}
	p = i;
	cout<<"\n\n";
	/*
	como si existe un datos para la lista tenemos 
	que empezar a recorrerla
	por cada uno de los elementos
	*/
	while(p){
		cout<<cont++<<"\nValor : "<<p->i<<endl;
		p = p -> s;
	}
	cout<<"\n FIN DE LA LISTA ";
	getch();
}

//buscar
int buscar(int d){
	//Saber si hay un dato
	if(!i){
		coutt<<"No hay datos para mostrar";
		getch();
		return;
	}
	
	//si hay
	p = i;
	a = NULL;
	
	while(p->s && p->i < d){
		//Recorrer los valores de la lista
		a = p;
		p = p->s;
	}
	
	return (p->i == d?1:0);
}

/*
para insertar cuantos caminos hay?
1.- la primera vez que se crea un dato

se debe crear el nodo y verificar apuntadores 

2.- enmedio

se debe buscar donde se va a ingresar
debe acomodar el apuntador anterior
y el apuntador siguiente (apuntador que aounta) 

3.- final solo se inserta y se ajusta el apuntador 

*/
