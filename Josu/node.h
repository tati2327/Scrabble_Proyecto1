//
// Created by josu on 15/03/19.
//

#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H
#include<iostream>
#include<stdlib.h>


class Node {

private:
    int value;                                           //Se tienen dos valores para los nodos porque bien pueden ser
    char letter;                                         //char o ints segun su uso, pero ambos nodos
    Node* next;                                          //Son listas simples, por eso solo tiene next

public:
    Node(int _value);                                    //Getter and setters
    Node(char _letter);

    char getLetter() const;
    void setLetter(char letter);

    int getValue() const;
    void setValue(int value);

    Node *getNext() const;
    void setNext(Node *next);

    void* operator new(size_t size);                    //Sobrecarga de new y delete para hacer malloc y tener la
    void operator delete(void*);                        //memoria en el heap
};


#endif //UNTITLED1_NODE_H
