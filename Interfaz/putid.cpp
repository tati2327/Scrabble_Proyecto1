#include "putid.h"
#include "ui_putid.h"

#include "QMessageBox"

putID::putID(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::putID)
{
  ui->setupUi(this);
}

putID::~putID()
{
  delete ui;
}

void putID::on_pushButton_pressed()
{
  if (idgame==ui->textEdit->toPlainText()){
      this->close();

    }
  else{
      QMessageBox::critical(this,
                            "Error",
                            "El ID no corresponde a una sala");
    }
}

void putID::on_textEdit_textChanged()
{
  if (ui->textEdit->toPlainText().length() > 6)
  {
      QString text = ui->textEdit->toPlainText();
      text.chop(text.length() - 6); // Cut off at 300 characters
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
                            "Please be sure that you keep the description under 6 characters.");
  }
}
