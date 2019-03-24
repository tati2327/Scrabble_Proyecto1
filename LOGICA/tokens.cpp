#include <iostream>
#include "tokens.h"
#include "linkedlist.h"
#include <cstdlib>

using namespace std;

Tokens::Tokens(LinkedList _letterlist) {
    int count=0;

    while(count<8){
        int random = rand()%(_letterlist.size()-1);
        char alo;
        alo = _letterlist.bring(random);
        L1.Add(alo);
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
