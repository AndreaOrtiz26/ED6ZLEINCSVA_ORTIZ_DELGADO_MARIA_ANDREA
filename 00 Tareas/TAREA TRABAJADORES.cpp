#include<iostream>
#include<string.h>
#include<conio.h>

#define MAX 50
struct fecha
 {
	int i;
  char dia[3];
  char mes[3];
  char anio[5];

 }*i, *n;
struct trabajador
 {
  char codigo[9];
  char nombre[MAX];
  char apellido[MAX];
  struct fecha nacimiento;

 };
 
 using namespace std;

 void Lper(int,struct trabajador[]) ;
 void ordenaxfecha(int,struct trabajador[]) ;
 void listado(int,struct trabajador[]) ;
 int bBinariafecha(int,struct trabajador[],struct fecha) ;
 void guardar(void);
int main(void){
system("color B1");
int n,pos ;
struct fecha f;                                                                               
struct trabajador x[MAX] ;
 
 cout<<"INTRODUZCA EL NUMERO DE TRABAJADORES A REGISTRAR: " ;cin>>n ;
 Lper(n,x) ;
 ordenaxfecha(n,x) ;
 listado(n,x) ;
 cout<<"Ingresa la fecha a buscar: "<<endl ;
 cout<<"Introduzca el Dia de la fecha a buscar (DD): " ;cin>>f.dia ;
 cout<<"Introduzca el Mes de la fecha a buscar (MM): " ;cin>>f.mes ;
 cout<<"Introduzca el Anio de la fecha a buscar(AAAA): " ;cin>>f.anio ;
 pos=bBinariafecha(n,x,f) ;
 if(pos==-1)cout<<"NO SE A ENCONTRADO UN TRABAJOR CON ESOS DATOS";
 else cout<<"TRABAJADOR NUMERO: "<<pos;

 getch();
 }


 void Lper(int n,struct trabajador x[]){
 for(int i=0;i<n;i++){
 cout<<"INTRODUZCA EL CODIGO:";cin>>x[i].codigo;
 cout<<"INTRODUZCA EL PRIMER APELLIDO DEL TRABAJADOR: ";cin>>x[i].apellido;
 cout<<"INTRODUZCA EL PRIMER NOMBRE DEL TRABAJADOR: ";cin>>x[i].nombre;
 cout<<"INTRODUZCA EL DIA DE NACIMIENTO DEL TRABAJADOR (DD): ";cin>>x[i].nacimiento.dia;
 cout<<"INTRODUZCA EL MES DE NACIMIENTO DEL TRABAJADOR (MM): ";cin>>x[i].nacimiento.mes;
 cout<<"INTRODUZCA EL ANIO DE NACIMIENTO DEL TRABAJADOR (AAAA): ";cin>>x[i].nacimiento.anio;
 cout<<endl;
 }
}
 void ordenaxfecha(int n,struct trabajador x[]){
 struct trabajador temp;
 char f1[9],f2[9];
 for(int i=1;i<n;i++)
 for(int j=n-  1;j>=1;j--){
 strcpy(f1,"");strcpy(f2,"");
 strcat(f1,x[j-1].nacimiento.anio);
 strcat(f1,x[j-1].nacimiento.mes);
 strcat(f1,x[j-1].nacimiento.dia);
 strcat(f2,x[j].nacimiento.anio);
 strcat(f2,x[j].nacimiento.mes);
 strcat(f2,x[j].nacimiento.dia);
if(strcmp(f1,f2)>0){
temp=x[j-1];
x[j-1]=x[j];
x[j]=temp;

}
}
}


void listado(int n,struct trabajador x[]){
cout<<endl<<"LISTA DE LOS TRABAJADORES"<<endl;
for(int i=0;i<n;i++)
cout<<x[i].codigo<<"\t"<<x[i].apellido<<"\t"
<<x[i].nombre<<"\t"<<x[i].nacimiento.dia
<<"/"<<x[i].nacimiento.mes<<"/"<<x[i].nacimiento.anio
<<endl;
cout<<endl;
}
int bBinariafecha(int n,struct trabajador x[],struct fecha f){
char f1[9],f2[9];
int izq=0,der=n-1,mitad;
while(izq<=der){
mitad=(izq+der)/2;
strcpy(f1,"");strcpy(f2,"");
strcat(f1,f.anio);
strcat(f1,f.mes);
strcat(f1,f.dia);
strcat(f2,x[mitad].nacimiento.anio);
strcat(f2,x[mitad].nacimiento.mes);
strcat(f2,x[mitad].nacimiento.dia);
if(strcmp(f1,f2)>0)izq=mitad+1;
else if(strcmp(f1,f2)<0)der=mitad-1;
else return mitad;
}
return -1;
}
void guardar(void){
	 FILE *arch;
	 arch=fopen("LISTA.TXT","w");
	 if(!i){
	 cout<<"\nNO HAY LISTA ";
	 getch();
	 return;
	 }
	 n=i;
	 while(n){
	 fprintf(arch,"%i\n",n>i);
	 }
	 cout<<"\nGuardado";
	 fclose(arch);
	 getch();
	 }
