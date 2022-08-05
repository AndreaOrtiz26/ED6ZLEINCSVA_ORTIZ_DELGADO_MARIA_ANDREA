#include<iostream>
using namespace std;

int main (){
	
	int dia, mes, anio, adia, ames, aanio, edad, rmes, rdia, ranio;
	
	cout<<"Ingesa tu dia de nacimiento: "<<endl;
	cin>>dia;
	cout<<"Ingesa tu mes de nacimiento con numeros, ejemplo Enero = 1: "<<endl;
	cin>>mes;
	cout<<"Ingesa tu año de nacimiento en este formato AAAA: "<<endl;
	cin>>anio;
	
	cout<<"Ingresa la fecha de hoy: "<<endl;
	cout<<"Dia: "<<endl;
	cin>>adia;
	cout<<"Mes con numeros ejemplo Enero=01: "<<endl;
	cin>>ames;
	cout<<"Año en este formato AAAA: "<<endl;
	cin>>aanio;
	
	if(adia<dia){
		adia = adia +30;
		ames = ames -1;
		rdia = adia-dia;
	}
	else
	rdia = adia - dia;
	if(ames < mes)
	{
		ames = ames +12;
		aanio =aanio -1;
		rmes= ames-mes;
	}
	else
	rmes = ames - mes;
	
	cout<<"\Los años que tiene actualmente son: "<<aanio - anio<<endl; 
	cout<<"\Los meses que tiene actualmente son: "<<rmes<<endl; 
	cout<< "\Los dias que tiene actualmente son: " <<rdia<<endl; 
	
	if( aanio - anio>= 18){
		cout<<"Eres mayor de edad";
	}else{
		cout<<"Eres menor de edad";
	}
	
	
	return 0;
	
}

