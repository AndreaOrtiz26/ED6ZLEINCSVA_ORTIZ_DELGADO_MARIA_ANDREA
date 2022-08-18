#include <iostream>
#include <conio.h>
#include <string.h>

#define MAX 50

using namespace std;
struct ordenamiento{
	int elem;
};
void leerarray(int, struct ordenamiento[]);
void burbuja(int, struct ordenamiento[]);
void mostrar(int, struct ordenamiento[]);

void burbujita();
void print(int[], int S);
void shell(int[], int S);

void volver();
int opci;

void shellcito();

void insercion_metodo();

int main(){
	cout<<"METODOS DE ORDENAMIENTO \n";
	cout<<"1.- BURBUJA\n";
	cout<<"2.- SELECCION DIRECTA\n";
	cout<<"3.- INSERCION\n";
	cout<<"DIGITE LA OPCION QUE DESEA\n";
	int opcion = 0;
    cin >> opcion;

    switch(opcion)
    {
        case 1: 
				cout << "\nSELECCIONO EL METODO BURBUJA\n";
        		burbujita();
        		volver();
        break;
        case 2: cout << "\nSELECCIONO EL METODO SELECCION DIRECTA\n";
        		insercion_metodo();
        		volver();
        break;
        case 3: cout << "\nSELECCIONO EL METODO INSERCION\n";
         shellcito();
        volver();
        break;
        default: cout << "OPCION INCORRECTA\n";
    }
    return 0;
}




//VOLVER
void volver(){
char op;do{
	cout<<"\nDesea regresar a menu? (S/N) : ";
cin>>op;
}while(op!='S' && op!='N');
if(op=='S')
	main();
else 
	system("pause");
}

//BURBUJA


void burbujita(){
	int n;
	struct ordenamiento orden[MAX];

	cout<<"Ingrese el limite del arreglo:\n ";
	cin>>n;

	leerarray(n, orden);
	burbuja(n, orden);

	cout<<endl<<"El arreglo ordenano es: \n"<<endl;

	mostrar(n, orden);

	getch();
}

void leerarray(int n, struct ordenamiento a[]){
	for(int i = 0; i < n; i++){
		cout<<"Ingrese el elemento: \n";
		cin>>a[i].elem;
	}
}

void burbuja(int n, struct ordenamiento a[]){
	int i, j;
	struct ordenamiento temp;

	
	for(i = 1; i < n; i++){
		for(j = n-1; j>=i; j--){
			
			if(a[j-1].elem > a[j].elem){
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}
}

void mostrar(int n, struct ordenamiento a[]){
	for(int i = 0; i < n; i++){
		cout<<" "<<a[i].elem;
	}
}


//shell

void shellcito()
{
    int dats;
    cout << "Digite cuantos datos desea agregar: " << endl;
    cin >> dats;
    int num[dats];
    for (int i = 0; i < dats; i++)
    {
        cout << " Ingrese el dato ( " << (i + 1) << " ) :" << endl;
        cin >> num[i];
    }
    shell(num, dats);
}

void shell(int B[], int S)
{

    int ints, i, aux;
    bool band;
    ints = S;
    while (ints > 1)
    {
        ints = (ints / 2);
        band = true;
        while (band == true)
        {
            band = false;
            i = 0;
            while ((i + ints) <= S)
            {
                if (B[i] > B[i + ints])
                {
                    aux = B[i];
                    B[i] = B[i + ints];
                    B[i + ints] = aux;
                    band = true;
                }
                i++;
                print(B, S);
            }
        }
    }
}

void print(int B[], int S)
{
    cout << "\n Datos ordenados: " << endl;

    for (int i = 0; i < S; i++)
        cout << "( " << B[i] << " )"<< endl;
}


//SELECCION DIRECTA
void insercion_metodo(){
	int vector[4] = {3, 2, 5, 8};
	int i, j, k, aux;
	
	for(k = 0; k<=2; k++){
		i = k;
		aux = vector[k];
		for(j = k+1; j<=3; j++){
			if(vector[j] < aux){
				i = j;
				aux = vector[i];
			}
		}
		//intercambio
		vector[i] = vector[k];
		vector[k] = aux;
	}
	
	for(i = 0; i<=3; i++){
		cout<<" "<<vector[i]<<" ";
		
	}
}
