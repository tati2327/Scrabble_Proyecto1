//
// Created by josu on 11/03/19.
//

#ifndef UNTITLED1_TOKENS_H
#define UNTITLED1_TOKENS_H
#include "linkedlist.h"


class Tokens {
private:
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
    Tokens(LinkedList UsedNumbers, LinkedList letters1);
    int random;
    LinkedList letterslist;




};


#endif //UNTITLED1_TOKENS_H
