#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "widget.h"
#include "putid.h"

namespace Ui {
  class mainWindow;
}

class mainWindow : public QWidget
{
  Q_OBJECT

public:
  explicit mainWindow(QWidget *parent = nullptr);
  ~mainWindow();
  Widget w;
  putID p;

private slots:
  void on_textEdit_textChanged();

  void on_pushButton_released();

  void on_pushButton_2_pressed();

private:
  Ui::mainWindow *ui;
};

#endif // MAINWINDOW_H
