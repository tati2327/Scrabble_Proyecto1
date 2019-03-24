#include "linkedlist.h"
#include "keyboard.h"
#include <iostream>

using namespace std;

Board::Board() {
    int count=0;
    int x=0;
    int y=0;

    while(count<225){
        if(x==15){
            x=0;
            y=y+1;
        }

        L1.Add('0',x,y);
        count=count+1;
        x=x+1;
    }

    L1.multipliers();
    L1.Showmat();
}