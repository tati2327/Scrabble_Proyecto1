#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>

namespace Ui {
  class Widget;
}

class Widget : public QWidget
{
  Q_OBJECT

public:
  explicit Widget(QWidget *parent = nullptr);
  ~Widget();
protected:
  void mouseDoubleClickEvent(QMouseEvent *event) override;
  void mouseMoveEvent(QMouseEvent *event) override;
  void mousePressEvent(QMouseEvent *event) override;
  void mouseReleaseEvent(QMouseEvent *event) override;
private slots:

  void on_pushButton_released();

  void on_pushButton_2_released();

  void on_pushButton_3_released();

  void on_pushButton_4_pressed();

  void on_pushButton_5_released();

  void on_pushButton_6_released();

  void on_pushButton_7_released();

  void on_pushButton_8_released();

private:
  void onMouseEvent(const QPoint &pos);
  QLabel* label(int number);
  Ui::Widget *ui;
};

#endif // WIDGET_H
