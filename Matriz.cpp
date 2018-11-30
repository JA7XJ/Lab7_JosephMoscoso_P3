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

Matriz::Matriz(int size, string nombre, int** m){
  this->size=size;
  /*if (size==2) {
    int determinante=0;

    this->determinante=determinante;
  }else{
    this->determinante=determinante;
  }*/
  this->nombre=nombre;
  //int** retVal=NULL;
  /*this->m=new int*[size];
  for(int i=0; i<size;i++){
      this->m[i]=new int[size];
  }*/
  this->m=m;
  cdeterminante(size);
}

void Matriz::cdeterminante(int size){
  if (size==2) {
    int col1=0;
    int col2=0;
    int resultado=0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i==0&&j==0) {
                col1=col1+this->m[i][j];
            }
            if (i==1&&j==1) {
                col1=col1+this->m[i][j];
            }
            if (i==0&&j==1) {
                col2=col2+this->m[i][j];
            }
            if (i==1&&j==0) {
                col2=col2+this->m[i][j];
            }
        }
    }
    resultado=col1-col2;
    //int determinante=0;
    this->determinante=resultado;
  }else{
    int c1=0;
    int c2=0;
    int c3=0;
    int col1=0;
    int col2=0;
    int col3=0;
    int resultado=0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i==0&&j==0) {
                c1=c1+this->m[i][j];
            }
            if (i==1&&j==1) {
                c1=c1+this->m[i][j];
            }
            if (i==2&&j==2) {
                c1=c1+this->m[i][j];
            }
            if (i==0&&j==1) {
                c2=c2+this->m[i][j];
            }
            if (i==1&&j==2) {
                c2=c2+this->m[i][j];
            }
            if (i==2&&j==0) {
                c2=c2+this->m[i][j];
            }
            if (i==0&&j==2) {
                c3=c3+this->m[i][j];
            }
            if (i==1&&j==0) {
                c3=c3+this->m[i][j];
            }
            if (i==2&&j==1) {
                c3=c3+this->m[i][j];
            }
            if (i==0&&j==1) {
                col1=col1+this->m[i][j];
            }
            if (i==1&&j==0) {
                col1=col1+this->m[i][j];
            }
            if (i==2&&j==2) {
                col1=col1+this->m[i][j];
            }
            if (i==0&&j==0) {
                col2=col2+this->m[i][j];
            }
            if (i==1&&j==2) {
                col2=col2+this->m[i][j];
            }
            if (i==2&&j==1) {
                col2=col2+this->m[i][j];
            }
            if (i==0&&j==2) {
                col3=col3+this->m[i][j];
            }
            if (i==1&&j==1) {
                col3=col3+this->m[i][j];
            }
            if (i==2&&j==0) {
                col3=col3+this->m[i][j];
            }
        }
    }
    int colum1=0;
    int colum2=0;
    colum1=c1+c2+c3;
    colum2=col1+col2+col3;
    resultado=colum1-colum2;
    this->determinante=resultado;
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

void Matriz::mostrar(){
  cout<<"Nombre matriz: "<<this->nombre<<endl;
  cout<<"Matriz: "<<endl;
  for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
          cout<<"["<<this->m[i][j]<<"]";
      }
      cout<<endl;
  }
  cout<<endl;
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
