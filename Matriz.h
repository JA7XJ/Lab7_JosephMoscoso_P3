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
    Matriz(int,int,string,int**);
    ~Matriz();
    int getSize();
    void setSize(int);
    int getDeterminante();
    void setDeterminante(int);
    string getNombre();
    void setNombre(string);
    int** operator | (int**);
    int operator ++ ();
    int operator -- ();
    int operator > (int);
    int** operator + (int);
    int** operator * (int);
};

#endif
