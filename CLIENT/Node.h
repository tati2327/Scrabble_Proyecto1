//
// Created by pablo on 03/04/19.
//

#ifndef CLIENT_NODE_H
#define CLIENT_NODE_H


#include<iostream>
#include<stdlib.h>

/*!
 * Clase Node
 * Se tienen dos valores para los nodos porque bien pueden ser
 * char o ints segun su uso. Como se esta trabajando con listas simples
 * solo tiene un next.
 */
class Node {

private:
    int value;               /*! Valor int*/
    char letter;             /*! Valor char*/
    Node* next;              /*!Puntero a siguiente */
    int posX;                /*! Posicion en x, valido solo para la lista de matriz*/
    int posY;                /*! Posicion en y, valido solo para la lista de matriz*/
    int multiplierL;         /*! Multiplicador de letra, valido solo para la lista de matriz*/
    int multiplierP;         /*! Multiplicadore de palabra, valido solo para la lista de matriz*/

public:
    /*! Constructor de Nodo tipo int*/
    Node(int _value);
    /*! Construcor de Nodo tipo char */
    Node(char _letter);
    /*! COnstructor de Nodo tipo matriz */
    Node(char _letter, int x, int y);



    /*!
     * Sobrecarga de new y delete para hacer malloc y tener la memoria en el heap
     * @param size
     * @return un puntero de tipo void*
     */
    void* operator new(size_t size);

    /*!
     * Libera la memoria del puntero que se le pasa por parametro
     * @param void* */
    void operator delete(void*);

    /*!
     * Getters and setters */
    int getPosX() const;
    void setPosX(int posX);

    int getPosY() const;
    void setPosY(int posY);

    int getMultiplierL() const;
    void setMultiplierL(int multiplierl);

    int getMultiplierP() const;
    void setMultiplierP(int multiplierp);

    char getLetter() const;
    void setLetter(char letter);

    int getValue() const;
    void setValue(int value);

    Node *getNext() const;
    void setNext(Node *next);
};

#endif //CLIENT_NODE_H
