#ifndef PUTID_H
#define PUTID_H

#include <QWidget>
namespace Ui {
  class putID;
}

class putID : public QWidget
{
  Q_OBJECT

public:Ui::putID *ui;
  QString idgame;
  explicit putID(QWidget *parent = nullptr);
  ~putID();

private slots:
  void on_pushButton_pressed();

  void on_textEdit_textChanged();

private:

};

#endif // PUTID_H
