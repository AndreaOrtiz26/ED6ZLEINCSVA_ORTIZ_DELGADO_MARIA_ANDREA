#include <iostream>

using namespace std;

int main(){
  int nro;
  cout << "Dijite el numero que desea: " <<nro;
  if ( nro % 2 == 0)
      cout << nro << "\nEl numero que ingreso es par";
  else
      cout << nro << "\nEl numero que ingreso es impar";
  return 0;
}
