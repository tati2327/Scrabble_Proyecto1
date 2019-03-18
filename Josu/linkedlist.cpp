//
// Created by josu on 11/03/19.
//
#include <cstdlib>
#include "linkedlist.h"
#include <iostream>

using namespace std;                                           //Facilidad para imprimir en consola
typedef struct Node* NPtr;                                     //Para no escribir Node* se puede escribir NPtr

LinkedList::LinkedList(){                                      //Contructor de la clase
    Tmp = NULL;
    Head = NULL;
    Curr = NULL;
}

//////////////////////////////////////

void LinkedList::Add(char _data) {

    NPtr newPtr = new Node(_data);                              //Se usa el new sobrecargado para agregar un char a una
                                                                //lista
    if (Head != NULL){

        Curr = Head;                                            //Curr es un puntero que nos ayuda a recorrer la lista
        while (Curr->getNext() != NULL){                        //con esto voy recorriendo la lista hasta llegar al
            Curr = Curr->getNext();                             //ultimo elemento que es el que apunta a NULL;
        }
        Curr->setNext(newPtr);                                  //Cuando se llega al final se asigna a que el ultimo ya
    }                                                           //no apunte a NULL sino al nuevo Nodo agregado, este apu
                                                                //apuntara a NULL
    else{
        Head = newPtr;                                          //Si Head==NULL significa que no hay elementos por lo
    }                                                           //cual se "agrega" al principio
}

/////////////////////////////////////////////

void LinkedList::Add(char _data,int x, int y) {                               //Mismo funcionamiento que el Add anterior
    NPtr newPtr = new Node(_data,x,y);

    if (Head != NULL){
        Curr = Head;
        while (Curr->getNext() != NULL){
            Curr = Curr->getNext();
        }
        Curr->setNext(newPtr);
    }
    else{
        Head = newPtr;
    }
}

////////////////////////////////////////////

void LinkedList::Add(int _data) {                               //Mismo funcionamiento que el Add anterior
    NPtr newPtr = new Node(_data);

    if (Head != NULL){
        Curr = Head;
        while (Curr->getNext() != NULL){
            Curr = Curr->getNext();
        }
        Curr->setNext(newPtr);
    }
    else{
        Head = newPtr;
    }
}

////////////////////////////////////////////

void LinkedList::Delete(char data) {
    NPtr deleted = NULL;
    Tmp = Head;
    Curr = Head;

    while (Curr != NULL && Curr->getLetter() != data){
        Tmp=Curr;
        Curr = Curr->getNext();
    }
    if (Curr == NULL){
        cout<<"Not found";
        delete deleted;
    }
    else{
        deleted=Curr;
        Curr = Curr->getNext();
        Tmp->setNext(Curr);
        if (deleted==Head){
            Head = Head->getNext();
            Tmp = NULL;
        }
        delete deleted;
    }

}

////////////////////////////////////////////

void LinkedList::Showmat(){
    Curr = Head;
    int cont= 0;
    while (Curr != NULL) {
        cout << Curr->getValue()<<" "<<Curr->getPosX()<<" "<<Curr->getPosY() << "->";
        Curr = Curr->getNext();
        cont=cont+1;
        if (cont==15){
            cout<<endl;
            cont=0;
        }
        else{}

    }
    cout<<endl;
}

////////////////////////////////////////////

void LinkedList::Showchar() {                                  //Muestra la lista
    Curr = Head;
    while (Curr!=NULL){                                        //Se recorre la lista con Curr y Curr.next
        cout << Curr->getLetter() << "->";                     //En cada punto imprime el char
        Curr = Curr->getNext();
    }
    cout<<endl;
}

////////////////////////////////////////////

void LinkedList::Showint() {                                   //Mismo funcionamiento solo que imprime el int no char
    Curr = Head;
    while (Curr!=NULL){
        cout << Curr->getValue() << "->";
        Curr = Curr->getNext();
    }
    cout<<endl;
}

////////////////////////////////////////////

bool LinkedList::Seek(int number) {
    Curr=Head;
    while(Curr != NULL && Curr->getValue()!=number){
        Curr=Curr->getNext();
    }
    if (Curr==NULL){
        return false;
    }
    else{
        return true;
    }


}

////////////////////////////////////////////

char LinkedList::bring(int pos) {
    Curr=Head;
    int count=0;
    while(count!=pos){
        Curr=Curr->getNext();
        count=count+1;
    }
    return Curr->getLetter();
}

////////////////////////////////////////////

void LinkedList::size() {
    Curr=Head;
    int count=0;
    while(Curr!=NULL){
        Curr=Curr->getNext();
        count=count+1;
    }
    cout<<count<<endl<<endl;
}

////////////////////////////////////////////

Node LinkedList::getLast() {
    Curr = Head;
    while (Curr->getNext()!=NULL){
        Curr=Curr->getNext();
    }
    return *Curr;
}

////////////////////////////////////////////

LinkedList LinkedList::moveletters(char *letters) {
    LinkedList L1;
    int count=0;
    while(count<100){
        L1.Add(letters[count]);
        count=count+1;
    }
    return L1;
}