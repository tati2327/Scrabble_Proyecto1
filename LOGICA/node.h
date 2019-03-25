#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H
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
        int value;                                           
        char letter;                                         
        Node* next;                                          
        int posX;
        int posY;
        int multiplierL;
        int multiplierP;

    public:
        Node(int _value);
        Node(char _letter);
        Node(char _letter, int x, int y);
    
        char getLetter() const;
        void setLetter(char letter);
    
        int getValue() const;
        void setValue(int value);
    
        Node *getNext() const;

        void setNext(Node *next);

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
    
        int getPosX() const;
        void setPosX(int posX);
    
        int getPosY() const;
        void setPosY(int posY);
    
        int getMultiplierL() const;
        void setMultiplierL(int multiplierl);
    
        int getMultiplierP() const;
        void setMultiplierP(int multiplierp);
};

#endif //UNTITLED1_NODE_H
