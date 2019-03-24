#ifndef UNTITLED1_LINKEDLIST_H
#define UNTITLED1_LINKEDLIST_H
#include "node.h"

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

        void Delete(int pos);              //Borrar nodos por valor
        void Delete(char data);
        void Delete(int posx, int posy);

        void Showmat();                     //Mustra la matriz
        void Showint();                     //Muestra las listas
        void Showchar();

        bool Seek(int number);              //Retorna un booleano si se encuentra un valor indicado

        char bring(int pos);                //Retorna un char encontrado en una lista

        int size();                        //Dimension de la lista

        Node getLast();

        Node* getpos(int x, int y);

        void putletter(char data, int x, int y);

        LinkedList moveletters(char letters[100]);  //Funcion para convertir las letras en una lista para darles uso

        void multipliers();

        Node* pointer(int y);

        Node* N0;
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
};
#endif //UNTITLED1_LINKEDLIST_H
