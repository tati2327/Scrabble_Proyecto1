//
// Created by josu on 11/03/19.
//
#include <iostream>
#include "tokens.h"
#include "linkedlist.h"
#include <cstdlib>
using namespace std;

Tokens::Tokens(LinkedList letterlist) {
    int count=0;
    while(count<8){
        int random = rand()%(letterlist.size()-1);
        char alo;
        alo = letterlist.bring(random);
        L1.Add(alo);
        count=count+1;

    }
    cout<<"Lista"<<endl;
    letterlist.Showchar();
    cout<<endl;
    cout<<"Letras restantes"<<endl;
    letterlist.size();
    cout<<endl;

    L1.Showchar();
    cout<<endl;
}

