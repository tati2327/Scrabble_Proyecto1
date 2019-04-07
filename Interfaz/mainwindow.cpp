#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

mainWindow::mainWindow(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::mainWindow)
{
  ui->setupUi(this);
}

mainWindow::~mainWindow()
{
  delete ui;
}

void mainWindow::on_textEdit_textChanged()
{
  // If the length is greater than 300 characters
      if (ui->textEdit->toPlainText().length() > 15)
      {
          QString text = ui->textEdit->toPlainText();
          text.chop(text.length() - 15); // Cut off at 300 characters
          ui->textEdit->setPlainText(text); // Reset text

          // This code just resets the cursor back to the end position
          // If you don't use this, it moves back to the beginning.
          // This is helpful for really long text edits where you might
          // lose your place.
          QTextCursor cursor = ui->textEdit->textCursor();
          cursor.setPosition(ui->textEdit->document()->characterCount() - 1);
          ui->textEdit->setTextCursor(cursor);

          // This is your "action" to alert the user. I'd suggest something more
          // subtle though, or just not doing anything at all.
          QMessageBox::critical(this,
                                "Error",
                                "Please be sure that you keep the description under 15 characters.");
      }
}

void mainWindow::on_pushButton_released()
{
  QString name=ui->textEdit->toPlainText();
  if (name==""){
      QMessageBox::critical(this,
                            "Error",
                            "Please be sure that you have a name.");
    }
  else {
      w.show();
      w.id= rand()%(999999-100000 + 1) + 100000;
      w.name=name;
      this->close();
    }

}
