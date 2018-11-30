#ifndef MATRIZ_H
#define MATRIZ_H

#include <string>
using std::string;

class Matriz{
  private:
    int size;
    int determinante;
    string nombre;
    int** m;
  public:
    Matriz();
    Matriz(int,string,int**);
    ~Matriz();
    void cdeterminante(int);
    int getSize();
    void setSize(int);
    int getDeterminante();
    void setDeterminante(int);
    string getNombre();
    void setNombre(string);
    void mostrar();
    int** operator | (int**);
    int operator ++ ();
    int operator -- ();
    int operator > (int);
    int** operator + (int);
    int** operator * (int);
};

#endif
