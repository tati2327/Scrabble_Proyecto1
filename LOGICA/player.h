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
public:
    const LinkedList &getRail() const;

    void setRail(const LinkedList &rail);

public:
    Player(LinkedList letterlist);
    bool jugando;
    int puntaje;
    LinkedList rail;

    bool isJugando() const;

    void setJugando(bool jugando);

    int getPuntaje() const;

    void setPuntaje(int puntaje);

    LinkedList getList(Tokens tokens);
};


#endif //UNTITLED1_PLAYER_H
