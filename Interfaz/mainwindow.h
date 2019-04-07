#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

#include "widget.h"

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

private slots:
  void on_textEdit_textChanged();

  void on_pushButton_released();

private:
  Ui::mainWindow *ui;
};

#endif // MAINWINDOW_H
