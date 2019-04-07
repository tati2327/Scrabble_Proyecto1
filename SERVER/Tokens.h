//
// Created by pablo on 05/04/19.
//

#ifndef SERVER_TOKENS_H
#define SERVER_TOKENS_H

#include "LinkedList.h"

/*!
 * Clase Tokens
 *
 */
class Tokens {
private:
    LinkedList L1;  /*! Lista de letras, o "bolsa"*/
public:
    /*! Contructor de la clase*/
    Tokens(LinkedList _letterlist);

    /*!
     * Getters and Setters*/
    const LinkedList &getL1() const;
    void setL1(const LinkedList &L1);
};
#endif //SERVER_TOKENS_H
