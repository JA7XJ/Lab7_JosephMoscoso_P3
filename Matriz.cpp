#include "Matriz.h"

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

Matriz::Matriz(){
  size=0;
  determinante=0;
  nombre="";
}

Matriz::~Matriz(){
  if (this->m==NULL) {
    /* code */
  }else{
    for(int i=0;i<this->size;i++){
        delete[] this->m[i];
        this->m[i]=NULL;
    }
    delete[] this->m;
    this->m=NULL;
  }
}

Matriz::Matriz(int size, int determinante, string nombre, int** m){
  this->size=size;
  this->determinante=determinante;
  this->nombre=nombre;
  int** retVal=NULL;
  this->m=new int*[size];
  for(int i=0; i<size;i++){
      this->m[i]=new int[size];
  }
}

int Matriz::getSize(){
  return size;
}

void Matriz::setSize(int size){
  this->size=size;
}

int Matriz::getDeterminante(){
  return determinante;
}

void Matriz::setDeterminante(int determinante){
  this->determinante=determinante;
}

string Matriz::getNombre(){
  return nombre;
}

void Matriz::setNombre(string nombre){
  this->nombre=nombre;
}

int** Matriz::operator |(int** x){

}

int Matriz::operator ++(){

}

int Matriz::operator --(){

}

int Matriz::operator >(int x){

}

int** Matriz::operator +(int x){

}

int** Matriz::operator *(int x){

}
