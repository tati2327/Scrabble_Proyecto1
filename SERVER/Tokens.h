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
         * Getter de L1*/
        const LinkedList &getL1() const;
        /*!
         * Setter de L1
         * @param L1
         */
        void setL1(const LinkedList &L1);
};
#endif //SERVER_TOKENS_H
