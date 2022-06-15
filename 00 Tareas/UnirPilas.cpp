/*
vamos a programas dos pilas que sirvan para poder 
unir ambos elemntos el programa debe de contener ingresar el 
tamaño de la pila un menu push, pop y mostrar los elementos de la pila
*/

#include<iostream>
#include<conio.h>

using namespace std;

//vamos a definir una pila dentro de otra
struct nodo{ 
     int nro;
     struct nodo *siguiente;
};

//definir una estructura de la pila
typedef nodo *pila;

//metodos del programa
void imprimir1(pila);
void imprimir2(pila);
void eliminarPila(pila &);
void push(pila &, int);
void unir(pila, pila );

int pop(pila &);

int main(){
	
  //detectar las pilas
  pila p1=NULL;
  pila p2=NULL;
  pila p=NULL; 
  
  
int opc,n,valor,i;


do{
    cout<<"1 Apilar\n";
    cout<<"2 Eliminar elemento \n";
    cout<<"3 Ver la pila\n";
    cout<<"4 Unir pilaa\n";
    cout<<"5 Eliminar Pila\n";
    cout<<"6 Salir\n";
    cout<<"Ingresa la opcion deseada: \n";
 	cin>>opc;
 
 switch(opc){
     case 1:
          cout<<"Ingresa el limite de la pila 1: \n"; 
		  cin>>n;
          cout<<"Valores de la pila 1:\n";
          for(i=0; i<n; i++){
		  cout<<"Valor:"<<endl;
          cin>>valor;
          push(p1,valor);
        }
          cout<<"Ingresa el limite de la pila 2: \n";
          for(i=0; i<n ;i++){
		  cout<<"Valor:"<<endl;
          cin>>valor;
          push(p2,valor);
        }
   break;
   case 2: 
   if(p!=NULL){ 
     cout<<"Valor Eliminado";
     n=pop(p);
     cout<<n<<endl;
   }
   else  cout<<"Pila vacia"<<endl;
   break;
   case 3:
         cout<<"Valores de la pila 1"<<endl;
         imprimir1(p1);
         cout<<"Valores de la pila 2"<<endl;
         imprimir1(p2);
   break;
   case 4:
         cout<<"Pilas unidas"<<endl;
         unir(p1,p2);
   break;
   case 5:
        eliminarPila(p);
        cout<<"Pila eliminada"<<endl;
   break;
} 

}
while(opc!=6);
}

void push(pila &p, int n){
  pila q=new(struct nodo);
  q->nro=n;
  q->siguiente=p;
  p=q;
}

int pop(pila &p){
  int n=p->nro;
  pila q=p;
  p=p->siguiente;
  delete (q);
  return n;
}


void eliminarPila(pila &p){
  pila q;
  while(p!=NULL){
   q=p;
   p=p->siguiente;
   delete(q); 
  }
}


void unir(pila p1, pila p2){
  pila q=p1;
  while(q->siguiente!=NULL)
  q=q->siguiente;
  q->siguiente=p2;
}


void imprimir(pila p1){
  while(p1!=NULL){
  cout<<p1->nro<<endl;
  p1=p1->siguiente;
 }
cout<<endl;
}


void imprimir1(pila p1){
  while(p1!=NULL){
  cout<<p1->nro<<endl;
  p1=p1->siguiente;
 }
cout<<endl;
}


void imprimir2(pila p2){
 while(p2!=NULL){ 
  cout<<p2->nro<<endl;
  p2=p2->siguiente;
 }
cout<<endl;
}
