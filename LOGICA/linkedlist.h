//
// Created by josu on 11/03/19.
//
#ifndef UNTITLED1_LINKEDLIST_H
#define UNTITLED1_LINKEDLIST_H

#include "node.h"

class LinkedList {                      //Clase lista para los nodos de la matriz de juego
private:

    Node* Head;                         //Se tiene 3 punteros a Nodos, Head es la cabeza de la lista, Tmp sirve para
    Node* Tmp;                          //guardar nodos que se pueden usar luego y Curr sera el un puntero por si se
    Node* Curr;                         //recorra la lista para saber por donde va.

public:
    LinkedList();                       //Constructor de la clase

    void Add(char data);                //Funciones para agregar elementos a la lista, ya sean ints o chars
    void Add(int data);
    void Add(char data, int x, int y);

    void Delete(int data);              //Borrar nodos por valor
    void Delete(char data);

    void Showmat();                     //Mustra la matriz
    void Showint();                     //Muestra las listas
    void Showchar();

    bool Seek(int number);              //Retorna un booleano si se encuentra un valor indicado

    char bring(int pos);                //Retorna un char encontrado en una lista

    void size();                        //Dimension de la lista

    Node getLast();

    LinkedList moveletters(char letters[100]);  //Funcion para convertir las letras en una lista para darles uso

};
#endif //UNTITLED1_LINKEDLIST_H
