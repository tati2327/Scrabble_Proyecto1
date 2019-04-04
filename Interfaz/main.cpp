#include "widget.h"
#include <QApplication>
#include "client.h"
#include <iostream>
#include "keyboard.h"
#include "tokens.h"
#include "cstdlib"
#include "game.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  a.setStyle("fusion");
  Widget w;
  w.show();
  Client c;
  c.newClient();
  Game G1(2,0);
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
  P1.putLetter(1,1,2);

  return a.exec();
}
