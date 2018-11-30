#include "Matriz.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

int main(){
  int puerta=0;
  while (puerta==0) {
    cout<<"1)Crear Matrices\n2)Listar Matrices\n3)Eliminar Matrices\n4)Operar con matrices\n5)Salir\n";
    cout<<"--------------------------------------"<<endl;
    int op=0;
    cout<<"Por favor ingrese la opcion correcta: ";
    cin>>op;
    cout<<"--------------------------------------"<<endl;
    while (op<1||op>5) {
        cout<<"Error, ingrese de nuevo: ";
        cin>>op;
        cout<<"--------------------------------------"<<endl;
    }

    if (op==1) {

    }

    if (op==2) {

    }

    if (op==3) {

    }

    if (op==4) {

    }

    if (op==5) {
        puerta=1;
    }
  }
  return 0;
}
