#include<iostream>

using namespace std;

int main(){
  int A=0,B=0,c=0,resul=0,o=0;
  cout<<"\n¡BIENVENIDO :D!\n";
  cout<<"Digite el numero del cual desea obtener sus numeros primos: "; 
  cin>>A;
  cout<<"\nLos numeros primos son: ";
  for(B=1;B<=A;B++){
  	
    for(c=1;c<=B;c++){
      resul=B%c;
      if(resul==0){
        o=o+1;
      }
    }
    
    if(o==2){
      cout<<"  \n\n"<<B;
    }
    o=0;
  }
  
}
