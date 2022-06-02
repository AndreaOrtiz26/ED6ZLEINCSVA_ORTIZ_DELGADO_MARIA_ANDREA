#include<iostream>
//determinar las etradas y salidas del codigo

using namespace std;
/*
IOStream nos sirve para dictaminar los
in del sistema por parte del teclado 
os del sistem ES lA SAlIDA ESTAnDAR Que es patalla
*/

main(){
	//declaración de variables
	//programa que nos diga si la persona es mayor de edad
	int edad;
		//salida en la patalla
	
	cout<<"Ingrese su edad";
	
	//entrada de datos
	cin>>edad;
	
	while(edad < 0){
		cout<<"Ingresa una edad valida";
		cin>>edad;
	}
	
	if( edad >= 18){
		cout<<"Es mayor de edad";
	}else{
		cout<<"Es menor de edad";
	}
	
	


}
