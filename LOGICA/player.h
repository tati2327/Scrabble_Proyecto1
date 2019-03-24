#ifndef UNTITLED1_PLAYER_H
#define UNTITLED1_PLAYER_H

#include <iostream>
#include "cstdlib"
#include "tokens.h"

/*!
 * Clase Player
 */
class Player {
    private:
        bool playing;
        int score;

    public:
        Player(LinkedList _letterlist, LinkedList _board);
        LinkedList letterlist;
        LinkedList rail;
        LinkedList board;

        bool getPlaying() const;
        void setPlaying(bool playing);

        int getScore() const;
        void setScore(int playing);

        void putLetter(int letter, int posx, int posy);
};


#endif //UNTITLED1_PLAYER_H
