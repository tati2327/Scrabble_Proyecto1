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
    if (x==0){
        if (y==0) N0 = newPtr;
        if (y==1) N1 = newPtr;
        if (y==2) N2 = newPtr;
        if (y==3) N3 = newPtr;
        if (y==4) N4 = newPtr;
        if (y==5) N5 = newPtr;
        if (y==6) N6 = newPtr;
        if (y==7) N7 = newPtr;
        if (y==8) N8 = newPtr;
        if (y==9) N9 = newPtr;
        if (y==10) N10 = newPtr;
        if (y==11) N11 = newPtr;
        if (y==12) N12 = newPtr;
        if (y==13) N13 = newPtr;
        if (y==14) N14 = newPtr;


    }
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

void LinkedList::Delete(int pos) {
    NPtr deleted = NULL;
    Tmp = Head;
    Curr = Head;
    int count = 0;

    while (Curr != NULL && count!=pos){
        Tmp=Curr;
        Curr = Curr->getNext();
        count= count+1;
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

void LinkedList::Delete(int posx, int posy) {
    NPtr deleted = NULL;
    Tmp = Head;
    Curr = Head;

    while (Curr != NULL && Curr->getPosY()==posy && Curr->getPosX()==posx){
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

}////////////////////////////////////////////

void LinkedList::Showmat(){
    Curr = Head;
    int cont= 0;
    for(int i=0; i<15;i++){
    cout << "L" << " " << "ML" << " " << "MP    ";}
    cout<< endl;
    while (Curr != NULL) {

        cout << Curr->getLetter()<< " " << Curr->getMultiplierl()<<" " << Curr->getMultiplierp() <<"  ->  ";
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
    char result = Curr->getLetter();
    Delete(pos);
    return result;
}

////////////////////////////////////////////

int LinkedList::size() {
    Curr=Head;
    int count=0;
    while(Curr!=NULL){
        Curr=Curr->getNext();
        count=count+1;
    }

    cout<<count<<endl<<endl;
    return count;
}

////////////////////////////////////////////

Node LinkedList::getLast() {
    Curr = Head;
    while (Curr->getNext()!=NULL){
        Curr=Curr->getNext();
    }
    return *Curr;
}

Node* LinkedList::getpos(int x, int y) {
    Curr=pointer(y);
    //Curr=Head;
    while (Curr!=NULL){
        if (Curr->getPosX()==x && Curr->getPosY()==y){
            return Curr;
        } else{
            Curr=Curr->getNext();
        }
    }
}

void LinkedList::putletter(char data,int x, int y) {
    getpos(x,y)->setLetter(data);
    Showmat();
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

void LinkedList::multipliers(){
    Node* Usable;
    for (int i=0;i<14;i++){
        if (i==6 || i==8){
            Usable=getpos(i,i);
            Usable->setMultiplierl(3);
            i++;
        }
        if (i==0){
            Usable=getpos(i,i);
            Usable->setMultiplierp(3);
            i++;
        }
        Usable = getpos(i,i);
        Usable->setMultiplierl(2);
    }
    Usable = getpos(14,14);
    Usable->setMultiplierp(3);
    Usable = getpos(0,14);
    Usable->setMultiplierp(3);
    Usable = getpos(14,0);
    Usable->setMultiplierp(3);
    Usable = getpos(0,7);
    Usable->setMultiplierp(3);
    Usable = getpos(7,0);
    Usable->setMultiplierp(3);
    Usable = getpos(14,7);
    Usable->setMultiplierp(3);
    Usable = getpos(7,14);
    Usable->setMultiplierp(3);
    for (int i=1; i<14;i++){
        for (int j=13;j>0;j--){
            if (i==8 || i==6){
                if (i+j==14) {
                    Usable = getpos(i,j);
                    Usable->setMultiplierl(3);
                }
            }
            else{
                if (i+j==14){
                    Usable = getpos(i,j);
                    Usable->setMultiplierl(2);
            }
            }
        }
    }
    Usable = getpos(1,5);
    Usable->setMultiplierp(2);
    Usable = getpos(2,6);
    Usable->setMultiplierl(2);
    Usable = getpos(3,7);
    Usable->setMultiplierl(2);
    Usable = getpos(2,8);
    Usable->setMultiplierl(2);
    Usable = getpos(1,9);
    Usable->setMultiplierp(2);
    Usable = getpos(5,1);
    Usable->setMultiplierp(2);
    Usable = getpos(6,2);
    Usable->setMultiplierl(2);
    Usable = getpos(7,3);
    Usable->setMultiplierl(2);
    Usable = getpos(8,2);
    Usable->setMultiplierl(2);
    Usable = getpos(9,1);
    Usable->setMultiplierp(2);
    Usable = getpos(5,13);
    Usable->setMultiplierp(2);
    Usable = getpos(6,12);
    Usable->setMultiplierl(2);
    Usable = getpos(7,11);
    Usable->setMultiplierl(2);
    Usable = getpos(8,12);
    Usable->setMultiplierl(2);
    Usable = getpos(9,13);
    Usable->setMultiplierp(2);
    Usable = getpos(13,5);
    Usable->setMultiplierp(2);
    Usable = getpos(12,6);
    Usable->setMultiplierl(2);
    Usable = getpos(11,7);
    Usable->setMultiplierl(2);
    Usable = getpos(12,8);
    Usable->setMultiplierl(2);
    Usable = getpos(13,9);
    Usable->setMultiplierp(2);
}

Node* LinkedList::pointer(int y) {
    if (y==0) return N0;
    if (y==1) return N1;
    if (y==2) return N2;
    if (y==3) return N3;
    if (y==4) return N4;
    if (y==5) return N5;
    if (y==6) return N6;
    if (y==7) return N7;
    if (y==8) return N8;
    if (y==9) return N9;
    if (y==10) return N10;
    if (y==11) return N11;
    if (y==12) return N12;
    if (y==13) return N13;
    if (y==14) return N14;
    }
