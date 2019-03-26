#ifndef UNTITLED1_TOKENS_H
#define UNTITLED1_TOKENS_H
#include "linkedlist.h"

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

#endif //UNTITLED1_TOKENS_H