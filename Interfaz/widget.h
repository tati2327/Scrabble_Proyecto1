#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "linkedlist.h"
#include <string>
namespace Ui {
  class Widget;
}

class Widget : public QWidget
{
  Q_OBJECT

public:
  explicit Widget(QWidget *parent = nullptr);
  bool can=false;
  bool playing=true;
  void probar(LinkedList used);
  LinkedList used;
  LinkedList L1;
  QPushButton* putletterback(int pos);
  QString name;
  int id;
  void setthis();
  ~Widget();Ui::Widget *ui;
protected:
  void mouseDoubleClickEvent(QMouseEvent *event) override ;
  void mouseMoveEvent(QMouseEvent *event) override;
  void mousePressEvent(QMouseEvent *event) override;
  void mouseReleaseEvent(QMouseEvent *event) override;
private slots:

  void on_pushButton_released();  /*!Boton para poner letra*/

  void on_pushButton_2_released(); /*!Boton para poner letra*/

  void on_pushButton_3_released(); /*!Boton para poner letra*/

  void on_pushButton_4_pressed(); /*!Boton para poner letra*/

  void on_pushButton_5_released(); /*!Boton para poner letra*/

  void on_pushButton_6_released(); /*!Boton para poner letra*/

  void on_pushButton_7_released(); /*!Boton para poner letra*/

  void on_pushButton_8_released(); /*!Boton para poner letra*/

  void on_pushButton_9_released(); /*!Boton para validar el movimiento*/


  void on_pushButton_10_pressed(); /*!Boton para empezar a jugar*/

private:
  void onMouseEvent(const QPoint &pos);
  QLabel* label(int number);

};

#endif // WIDGET_H
