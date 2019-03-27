#include "Board.h"
#include "ui_Board.h"

Board::Board(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::Board)
{
  ui->setupUi(this);
  QPushButton *ptr = ui->pushButton;
}

Board::~Board()
{
  delete ui;
}
