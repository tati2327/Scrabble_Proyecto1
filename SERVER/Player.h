#ifndef SERVER_PLAYER_H
#define SERVER_PLAYER_H

#include <string>
#include "LinkedList.h"
#include "Game.h"

using namespace std;

/*!
 * Clase Player
 */
class Player {
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
};

#endif //SERVER_PLAYER_H