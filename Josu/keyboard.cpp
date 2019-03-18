//
// Created by josu on 11/03/19.
//
#include "linkedlist.h"
#include "keyboard.h"
#include <iostream>

using namespace std;

Keyboard::Keyboard() {
    LinkedList L1;
    int count=0;
    while(count<224){
        L1.Add('0');
        count=count+1;
    }
    L1.Showmat();

}