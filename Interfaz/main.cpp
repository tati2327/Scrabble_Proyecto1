#include "widget.h"
#include "mainwindow.h"
#include <QApplication>
#include "client.h"
#include <iostream>
#include "cstdlib"
int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  a.setStyle("fusion");
  mainWindow mw;
  mw.show();
  Client c;
  c.newClient();

  return a.exec();
}
