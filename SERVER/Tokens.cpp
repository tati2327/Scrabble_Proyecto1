//
// Created by pablo on 05/04/19.
//
#include <iostream>
#include "Tokens.h"
#include "LinkedList.h"
#include <cstdlib>

using namespace std;

Tokens::Tokens(LinkedList _letterlist) {    /*! Se le pasa por parametro la bolsa para seleccionar las fichas*/
    int count=0;                    /*! Contador para saber cuantas letras poner por rail*/

    while(count<8){
        int random = rand()%(_letterlist.size()-1); /*! Se escoje una ficha al azar de la bolsa*/
        char letter;
        letter = _letterlist.bring(random);         /*! Asignacion de la letra*/
        L1.Add(letter);                             /*! Se agrega al rail del jugador*/
        count=count+1;
    }

    cout<<"Lista"<<endl;
    _letterlist.Showchar();
    cout<<endl;
    cout<<"Letras restantes"<<endl;
    _letterlist.size();
    cout<<endl;

    L1.Showchar();
    cout<<endl;
}

const LinkedList &Tokens::getL1() const {
    return L1;
}

void Tokens::setL1(const LinkedList &L1) {
    Tokens::L1 = L1;
}