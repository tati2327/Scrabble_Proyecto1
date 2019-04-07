#include <iostream>
<<<<<<< HEAD
#include "Board.h"
#include "Game.h"
#include "Player.h"

using namespace std;

int main() {
   Game G1(2,0);

    /*LinkedList b = G1.getBoard();
    b.Showmat();

    cout<<"INICIANDO JUEGO..."<<endl;
    LinkedList board =  G1.getBoard();
    LinkedList bolsa =  G1.getLetterlist();
    Player P1(bolsa, board);
    Player P2(bolsa, board);


    cout<<"SE REPARTEN FICHAS..."<<endl;
    P1.makeitplay();
    P1.rail.Showchar();
    cout<<"SE REPARTEN FICHAS..."<<endl;
    P2.makeitplay();
    P2.rail.Showchar();

    cout<<"SE COLOCAN LETRAS..."<<endl;
    P1.putLetter(6,1,2);
    P2.putLetter(5,3,5);

    b.Showmat();*/

    /*
    P1.rail.Showchar();
    P2.rail.Showchar();
    P1.putLetter(1,1,2);*/
    LinkedList L1;
    L1.Add('a',1,1);
    L1.Add('e',1,2);
    L1.Add('u',1,3);
    cout<<L1.bringNode(0)->getLetter()<<endl;
    L1.Showchar();
    Node* hola = L1.bringNode(0);


   G1.validateWords(L1,hola);
=======

int main() {
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5

    return 0;
}