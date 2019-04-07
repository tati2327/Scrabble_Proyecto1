#ifndef SERVER_PLAYER_H
#define SERVER_PLAYER_H
<<<<<<< HEAD
#include <iostream>
#include "cstdlib"
#include "Tokens.h"
#include "LinkedList.h"
=======

#include <string>
#include "LinkedList.h"
#include "Game.h"

using namespace std;
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5

/*!
 * Clase Player
 */
class Player {
<<<<<<< HEAD
private:
    bool playing;         /*! Boolean para permitir que el jugador ejecute una jugada*/
    int score;            /*! Puntuacion del jugador*/

public:
    /*!
     * Constuctor de la clase*/
    Player(LinkedList _letterlist, LinkedList _board);
    /*! Se le dan fichas al jugador*/
    void makeitplay();
    LinkedList letterlist;      /*! Bolsa de fichas */
    LinkedList rail;            /*! Rail de juego*/
    LinkedList board;           /*! MAtriz de juego*/

    /*!
     * Funcion para poner una letra en la matriz
     * @param letter numero de la casilla de la letra que se quiere poner
     * @param posx posicion en x
     * @param posy posicion en y*/
    void putLetter(int letter, int posx, int posy);

    /*!
     * Getters and Setters*/
    bool getPlaying() const;
    void setPlaying(bool playing);

    int getScore() const;
    void setScore(int playing);


=======
    private:
        bool playing; /*!< Boolean para permitir que el jugador ejecute una jugada*/
        int score; /*!< Puntuacion del jugador*/
        Game myGame;

    public:
        LinkedList* rail; /*!< Rail de juego*/
        LinkedList board; /*! Matriz de juego*/

        /*!
         * refilRail();
         * Se le dan fichas al jugador
         */
        void refillRail();

        /*!
         * Funcion para poner una letra en la matriz
         * @param letter numero de la casilla de la letra que se quiere poner
         * @param posx posicion en x
         * @param posy posicion en y
         */
        void putLetter(int letter, int posx, int posy);

        /*!
         * Getters and Setters
         */
        bool getPlaying() const;
        void setPlaying(bool playing);

        int getScore() const;
        void setScore(int playing);
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
};

#endif //SERVER_PLAYER_H