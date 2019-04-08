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

  //mThread2.start();


  mainWindow mw;

  mw.show();
  //thread.join();


  return a.exec();

}
