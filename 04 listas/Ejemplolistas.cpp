/*
una liksta es una estructura que deriva una secuencia
 conectada con nodos y cada uno de los datos los cuales contienen un dato
Hay nodo al comienzo llamado la cabeza o frente
hay un nodo llamado cola o atras

la lista solo puede ser recorrida en secuencia de 
atras o hacia adelante

operaciones de su propia estructura

añadir insertar elemento
mover atraves de la lista de principio a fin
buscar elementos

Apuntadores

& memoria
* al dato
-> asigna

ejemplo

nodo *elemento ->elemento -> valor

en c++ vamos a ocupar list ya que es una clase
de tipo templete nos permite crear listas 
que contengan cualquier tipo de objeto
las operaciones que se pueden incluir en la lista son:

push meter
pop sacar

begin() inicio
end() final

size() tamaño
empty () vacio



*/



#include<iostream>

using namespace std;

//definir la estructura de la lista
struct Nodo{
	//Los valores de la lista
	int valor;
	Nodo *siguiente;
}

//definir los metodos
void insertarLista(Nodo*&, int);

int main(){
	//declarar mi variable e la liksta
	//que apunte a null
	Nodo *lista = NULL;
	
	//variables
	int op = 1, c, i=0, valores;
	
	cout<<"Trabajando con listas (doblemente enlazadas, circulares y circulares dobles)"<<endl;
	while(op!=3){
		cout<<"Ejemplo de lista simple: "<<endl;
		cout<<"1.- insertar nuevo valor: "<<endl;
		cout<<"2.- Ver la lista "<<endl;
		cout<<"3.- Salir "<<endl;
		cin>>(op){
			case 1:
				cout<<"Indica el numero de valores a introducir\n";
				cin>>valores;
				while(i<valores){
					cout<<"Valor["<<i<<"]\n";
					cin>>c;
					//insertar el valor
					insertarLista(lista,c);
					i++;
				}
				break;
				
			case 2:
				cout<<"Mostrar los valores de la lista\n";
				cout<<"imprimir valores";
				break;
			default
				cout<<"Gracias por mimir aqui uwu";
		}
	}
	return 0;
}
void insertarLista(Nodo*&lista, int c){
	//crear nueva lista
	Nodo *insLista = new Nodo();
	//debo asignar el valor de la lista
	inslista->valor =c;
	//necesita auxiliar para encadenar los valores
	Nodo *aux = lista;
	Nodo *aux2;
	//meter valores forma ordenada
}/*
una liksta es una estructura que deriva una secuencia
 conectada con nodos y cada uno de los datos los cuales contienen un dato
Hay nodo al comienzo llamado la cabeza o frente
hay un nodo llamado cola o atras

la lista solo puede ser recorrida en secuencia de 
atras o hacia adelante

operaciones de su propia estructura

añadir insertar elemento
mover atraves de la lista de principio a fin
buscar elementos

Apuntadores

& memoria
* al dato
-> asigna

ejemplo

nodo *elemento ->elemento -> valor

en c++ vamos a ocupar list ya que es una clase
de tipo templete nos permite crear listas 
que contengan cualquier tipo de objeto
las operaciones que se pueden incluir en la lista son:

push meter
pop sacar

begin() inicio
end() final

size() tamaño
empty () vacio



*/



#include<iostream>

using namespace std;

//definir la estructura de la lista
struct Nodo{
	//Los valores de la lista
	int valor;
	Nodo *siguiente;
}

//definir los metodos
void insertarLista(Nodo*&, int);

int main(){
	//declarar mi variable e la liksta
	//que apunte a null
	Nodo *lista = NULL;
	
	//variables
	int op = 1, c, i=0, valores;
	
	cout<<"Trabajando con listas (doblemente enlazadas, circulares y circulares dobles)"<<endl;
	while(op!=3){
		cout<<"Ejemplo de lista simple: "<<endl;
		cout<<"1.- insertar nuevo valor: "<<endl;
		cout<<"2.- Ver la lista "<<endl;
		cout<<"3.- Salir "<<endl;
		cin>>(op){
			case 1:
				cout<<"Indica el numero de valores a introducir\n";
				cin>>valores;
				while(i<valores){
					cout<<"Valor["<<i<<"]\n";
					cin>>c;
					//insertar el valor
					insertarLista(lista,c);
					i++;
				}
				break;
				
			case 2:
				cout<<"Mostrar los valores de la lista\n";
				cout<<"imprimir valores";
				break;
			default
				cout<<"Gracias por mimir aqui uwu";
		}
	}
	return 0;
}
void insertarLista(Nodo*&lista, int c){
	//crear nueva lista
	Nodo *insLista = new Nodo();
	//debo asignar el valor de la lista
	inslista->valor =c;
	//necesita auxiliar para encadenar los valores
	Nodo *aux = lista;
	Nodo *aux2;
	//meter valores forma ordenada
}
//meter los valores de forma ordenada
	while((aux!=NULL) && (aux->valor < c)){
		aux2 = aux;
		aux = aux->siguiente;
	}
	if(inslista==aux){
		lista = inslista;
	}else{
		aux2->siguiente = inslista;
	}
	
	inslista -> siguiente = aux;
	
	cout<<"Elemento "<<c<<" insertado"<<endl;
}

//Tarea mostrar valores 
