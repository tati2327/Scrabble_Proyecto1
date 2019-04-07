#ifndef SERVER_GAME_H
#define SERVER_GAME_H

#include "LinkedList.h"
<<<<<<< HEAD
#include "Player.h"
#include "Dictionary.h"
=======
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5

/*!
 * Clase Game
 *
 */
class Game {
<<<<<<< HEAD
private:
    Dictionary dictionary;
    LinkedList letterlist;      /*! Bolsa*/
    LinkedList board;           /*! Matriz de juego*/
    LinkedList playedWords;     /*!Palabras ya validadas*/

    int turn;                   /*! Turno de juego*/
    /*! Lista de letras*/
    char letters[100]={'A','A','A','A','A','A','A','A','A','A',
                       'A','A','E','E','E','E','E','E','E','E',
                       'E','E','E','E','O','O','O','O','O','O',
                       'O','O','O','I','I','I','I','I','I','S',
                       'S','S','S','S','S','N','N','N','N','N',
                       'L','L','L','L','R','R','R','R','R','U',
                       'U','U','U','U','T','T','T','T','D','D',
                       'D','D','D','G','G','C','C','C','C','B',
                       'B','M','M','P','P','H','H','F','V','Y',
                       '1','Q','J','2','4','3','X','Z','5','5'};
public:
    const LinkedList &getPlayedWords() const;

    void setPlayedWords(const LinkedList &playedWords);

public:
    /*!
     * Constructor de la clase*/
    Game(int players, int turn);
    bool rowscolums(LinkedList temp);

    /*!
     * Getters and Setters*/
    int getTurn() const;
    bool validateWords(LinkedList toValidate,Node* hola);
    void setTurn(int turn);

    const LinkedList &getLetterlist() const;

    void setLetterlist(const LinkedList &letterlist);

    const LinkedList &getBoard() const;

    void setBoard(const LinkedList &board);

};

=======
    private:
        LinkedList letterlist; /*!< Bolsa*/
        LinkedList board; /*!< Matriz de juego*/

        bool validateWord();

        int turn; /*!< Turno de juego*/

        /*! Lista de letras*/
        char letters[100]={'A','A','A','A','A','A','A','A','A','A',
                           'A','A','E','E','E','E','E','E','E','E',
                           'E','E','E','E','O','O','O','O','O','O',
                           'O','O','O','I','I','I','I','I','I','S',
                           'S','S','S','S','S','N','N','N','N','N',
                           'L','L','L','L','R','R','R','R','R','U',
                           'U','U','U','U','T','T','T','T','D','D',
                           'D','D','D','G','G','C','C','C','C','B',
                           'B','M','M','P','P','H','H','F','V','Y',
                           '1','Q','J','2','4','3','X','Z','5','5'};

    public:
        /*!
         * Constructor de la clase
         * */
        Game(int players, int turn);

        /*!
         * Getters and Setters*/
        int getTurn() const;
        void setTurn(int turn);

        const LinkedList &getLetterlist() const;
        void setLetterlist(const LinkedList &letterlist);

        const LinkedList &getBoard() const;
        void setBoard(const LinkedList &board);

        LinkedList* fillRail(LinkedList *rail);
};


>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
#endif //SERVER_GAME_H
