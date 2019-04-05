//
// Created by tati2327 on 3/04/19.
//

#ifndef SERVER_LINKEDLIST_H
#define SERVER_LINKEDLIST_H


#include "Node.h"

/*!
 * Clase LinkedList
 *
 * Clase que crea una lista enlazada de nodos
 */
class LinkedList {
    private:
        Node* Head; /*! <Head es la cabeza de la lista. */
        Node* Tmp; /*! <Tmp sirve para guardar nodos que se pueden usar luego */
        Node* Curr; /*! <Curr sera el un puntero por si se recorre la lista para saber por donde va.*/
        Node* N0;   /*! Punteros de inicio de fila*/
        Node* N1;
        Node* N2;
        Node* N3;
        Node* N4;
        Node* N5;
        Node* N6;
        Node* N7;
        Node* N8;
        Node* N9;
        Node* N10;
        Node* N11;
        Node* N12;
        Node* N13;
        Node* N14;
    public:
        LinkedList(); /*! <Constructor de la clase */

        /*!
         * Funcion para agregar un elemento de tipo char a la lista
         * Se agrega el elemneto al final de la lista
         * @param data de tipo char
         */
        void Add(char data);

        /*!
         * Funcion para agregar un elemento de tipo int a la lista
         * @param data
         */
        void Add(int data);

        /*!
         * Funcion para agregar un elemento de tipo int a la lista
         * @param data
         * @param x
         * @param y
         */
        void Add(char data, int x, int y);

        /*!
         * Funcion para borrar por posicion en la lista
         * @param pos, posicion en la lista*/
        void Delete(int pos);
        void Delete(char data);
        void Delete(int posx, int posy);

        /*!
         * Funcion para mostrar la matriz de juego*/
        void Showmat();

        /*!
         * Funcion para mostrar la lista de ints*/
        void Showint();
        /*!
         * Funcion para mostrar la lista de chars*/
        void Showchar();

        bool Seek(int number);

        /*!
         * Funcion para retornar el char de una lista
         * @param pos, posicion del nodo
         * @return char obtenido de la poscion*/
        char bring(int pos);

        /*!
         * Funcion que retorna la dimension de una lista
         * @return int, dimension de la lista*/
        int size();
        Node getLast();

        /*!
         * Funcion que retorna un puntero segun la posicion en "x" y "y" de la matriz de juego
         * @param x posicion de la matriz
         * @param y posicion de la matriz
         * @return puntero a Nodo*/
        Node* getpos(int x, int y);

        /*!
         * Funcion que coloca una letra en la matriz de juego
         * @param data, letra que se quiere poner
         * @param x, posicion en x
         * @param y, posicion en y*/
        void putletter(char data, int x, int y);

        /*!
         * Funcion que convierte el char de letras de juego en una lista con las mismas letras pero en Nodos
         * @param letters, array con las letras
         * @return linked list con los nodos*/
        LinkedList moveletters(char letters[100]);

        /*!
         * Funcion para asignar multiplicadores a la matriz*/
        void multipliers();

        /*!
         * Funcion que retorna un puntero al inicio de la fila pedida de la matriz
         * @param y, numeor de fila
         * @return puntero de nodo al inicio de la fila*/
        Node* pointer(int y);
};


#endif //SERVER_LINKEDLIST_H
