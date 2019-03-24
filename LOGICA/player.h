//
// Created by josu on 20/03/19.
//

#ifndef UNTITLED1_PLAYER_H
#define UNTITLED1_PLAYER_H

#include <iostream>
#include "cstdlib"
#include "tokens.h"

class Player {
private:
    bool jugando;
    int puntaje;

public:
    Player(LinkedList letterlist, LinkedList keyboard);
    LinkedList letterlist;
    LinkedList rail;
    LinkedList keyboard;

    bool isJugando() const;

    void setJugando(bool jugando);

    int getPuntaje() const;

    void setPuntaje(int puntaje);

    void putLetter(int letter, int posx, int posy);
};


#endif //UNTITLED1_PLAYER_H
