//
// Created by pablo on 03/04/19.
//

#include "Player.h"

LinkedList Player::sendWords(LinkedList rail) {
    Node* curr= rail. getHead();
    while(curr->getNext()!= nullptr){
        if(curr->getPosX() & curr->getPosX() ==0){
            lettersToValidate.Add(curr->getLetter(),curr->getPosX(),curr->getPosY());
        }else{
            curr=curr->getNext();
        }
    }
    return lettersToValidate;
}

void Player::updateBoard(LinkedList validatedLetters) {
    Node* curr = validatedLetters.getHead();
    while(curr->getNext()!= nullptr){

    }
}