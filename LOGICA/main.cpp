#include <iostream>
#include "keyboard.h"
#include "tokens.h"
#include "cstdlib"
#include "game.h"

using  namespace std;

int main() {
    Board b;
    b.getBoard();
    LinkedList l1;

    l1.Add('a',0,0);

    l1.getpos(0,0);

    Node v = Node('s',2,5);

    cout<<v.getPosX();
    cout<<v.getPosY();


    /*Game G1(2,0);
    LinkedList board =  G1.getBoard();
    LinkedList bolsa =  G1.getLetterlist();
    Player P1(bolsa, board);
    Player P2(bolsa, board);
    P1.makeitplay();
    P2.makeitplay();
    P1.rail.Showchar();
    P2.rail.Showchar();
    P1.putLetter(3,1,2);
    P2.putLetter(4,3,5);
    P1.rail.Showchar();
    P2.rail.Showchar();
    P1.putLetter(1,1,2);*/
    return 0;
}
