//
// Created by josu on 11/03/19.
//
#include <iostream>
#include "tokens.h"
#include "linkedlist.h"
#include <cstdlib>
using namespace std;


Tokens::Tokens(LinkedList UsedNumbers, LinkedList letters1) {
    LinkedList L1;

    int count=0;
    while(count<7){
        random = rand()%99;
        UsedNumbers.Add(random);
        while (UsedNumbers.Seek(random)== true){
            random =rand()%99;
        }
        char alo;
        alo = letters1.bring(random);
        L1.Add(alo);
        count=count+1;

    }
    L1.Showchar();
    cout<<endl;
    UsedNumbers.Showint();
    cout<<endl;
}

