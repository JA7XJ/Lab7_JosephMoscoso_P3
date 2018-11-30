#include "Matriz.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;

int** init(int);
void llenar(int**, int);

int main(){
  int puerta=0;
  vector<Matriz*> m;
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
        cout<<"1)Matriz 2x2\n2)Matriz 3x3\n";
        cout<<"--------------------------------------"<<endl;
        cout<<"Ingrese la opcion correcta: ";
        int op2=0;
        cin>>op2;
        cout<<"--------------------------------------"<<endl;
        while (op2<1||op2>2) {
            cout<<"Error, ingrese de nuevo: ";
            cin>>op2;
            cout<<"--------------------------------------"<<endl;
        }
        if (op2==1) {
            int size=2;
            cout<<"Ingrese el nombre: ";
            string nombre="";
            cin>>nombre;
            int** ma=NULL;
            ma=init(size);
            llenar(ma, size);
            m.push_back(new Matriz(size,nombre,ma));
            cout<<"-------------------------------------"<<endl;
            cout<<"Matriz creada con exito"<<endl;
            cout<<"-------------------------------------"<<endl;
        }
        if (op2==2) {
          int size=3;
          cout<<"Ingrese el nombre: ";
          string nombre="";
          cin>>nombre;
          int** ma=NULL;
          ma=init(size);
          llenar(ma, size);
          m.push_back(new Matriz(size,nombre,ma));
          cout<<"-------------------------------------"<<endl;
          cout<<"Matriz creada con exito"<<endl;
          cout<<"-------------------------------------"<<endl;
        }
    }
    if (op==2) {
        for (int i = 0; i < m.size(); i++) {
            cout<<"Posicion "<<i<<endl;
            m[i]->mostrar();
        }
    }
    if (op==3) {
        cout<<"Matrices: "<<endl;
        for (int i = 0; i < m.size(); i++) {
            cout<<"Posicion "<<i<<endl;
            m[i]->mostrar();
        }
        cout<<"-------------------------------------"<<endl;
        cout<<"Ingrese el numero de la posicion a eliminar: ";
        int pos=0;
        cin>>pos;
        while (pos>m.size()) {
            cout<<"error, posicion no existe, ingrese de nuevo: ";
            cin>>pos;
            cout<<"-------------------------------------"<<endl;
        }
        m.erase(m.begin()+pos, m.begin()+pos+1);
        //cout<<"-------------------------------------"<<endl;
        cout<<"Matriz eliminado con exito"<<endl;
        cout<<"-------------------------------------"<<endl;
        //delete m[pos];
    }
    if (op==4) {

    }
    if (op==5) {
        puerta=1;
    }
  }
  cout<<"Fin del programa"<<endl;
  if (m.empty()) {

  }else{
    for (int i; i < m.size(); i++) {
        delete m[i];
    }
    m.clear();
  }
  return 0;
}

void llenar(int** ma, int size){
  for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
          int temp=0;
          cout<<"Ingrese numero: ";
          cin>>temp;
          ma[i][j]=temp;
          cout<<"\n";
      }
  }
}

int** init(int size){
  int** retVal=NULL;
  retVal=new int*[size];
  for(int i=0; i<size;i++){
      retVal[i]=new int[size];
  }
  return retVal;
}
