
#include "widget.h"
#include "ui_widget.h"
#include "QMouseEvent"
#include "QDebug"
#include <iostream>
#include <string>
using namespace std;
Widget::Widget(QWidget *parent)
  :QWidget(parent),
  ui(new Ui::Widget)
{

  ui->setupUi(this);

  QApplication::processEvents();

}

Widget::~Widget()
{
  delete ui;
}
void Widget::mouseDoubleClickEvent(QMouseEvent *event){
  onMouseEvent(event->pos());
 QWidget::mouseDoubleClickEvent(event);
}
void Widget::mouseMoveEvent(QMouseEvent *event){
  onMouseEvent(event->pos());
 QWidget::mouseMoveEvent(event);
}
void Widget::mousePressEvent(QMouseEvent *event){

  onMouseEvent(event->pos());
  QWidget::mousePressEvent(event);
}
void Widget::mouseReleaseEvent(QMouseEvent *event){
  onMouseEvent(event->pos());
  QWidget::mouseReleaseEvent(event);
}

void Widget::onMouseEvent(const QPoint &pos){
  ui->spinBox->setValue(pos.x());
  ui->spinBox_2->setValue(pos.y());}


QLabel* Widget::label(int number){
  if(number==0) return ui->label;
  if(number==1) return ui->label_2;
  if(number==2) return ui->label_3;
  if(number==3) return ui->label_4;
  if(number==4) return ui->label_5;
  if(number==5) return ui->label_6;
  if(number==6) return ui->label_7;
  if(number==7) return ui->label_8;
  if(number==8) return ui->label_9;
  if(number==9) return ui->label_10;
  if(number==10) return ui->label_11;
  if(number==11) return ui->label_12;
  if(number==12) return ui->label_13;
  if(number==13) return ui->label_14;
  if(number==14) return ui->label_43;
  if(number==15) return ui->label_44;
  if(number==16) return ui->label_45;
  if(number==17) return ui->label_46;
  if(number==18) return ui->label_47;
  if(number==19) return ui->label_48;
  if(number==20) return ui->label_49;
  if(number==21) return ui->label_50;
  if(number==22) return ui->label_51;
  if(number==23) return ui->label_52;
  if(number==24) return ui->label_53;
  if(number==25) return ui->label_54;
  if(number==26) return ui->label_55;
  if(number==27) return ui->label_56;
  if(number==28) return ui->label_57;
  if(number==29) return ui->label_58;
  if(number==30) return ui->label_59;
  if(number==31) return ui->label_60;
  if(number==32) return ui->label_61;
  if(number==33) return ui->label_62;
  if(number==34) return ui->label_63;
  if(number==35) return ui->label_64;
  if(number==36) return ui->label_65;
  if(number==37) return ui->label_66;
  if(number==38) return ui->label_67;
  if(number==39) return ui->label_68;
  if(number==40) return ui->label_69;
  if(number==41) return ui->label_70;
  if(number==42) return ui->label_71;
  if(number==43) return ui->label_72;
  if(number==44) return ui->label_73;
  if(number==45) return ui->label_74;
  if(number==46) return ui->label_75;
  if(number==47) return ui->label_76;
  if(number==48) return ui->label_77;
  if(number==49) return ui->label_78;
  if(number==50) return ui->label_79;
  if(number==51) return ui->label_80;
  if(number==52) return ui->label_81;
  if(number==53) return ui->label_82;
  if(number==54) return ui->label_82;
  if(number==55) return ui->label_84;
  if(number==56) return ui->label_85;
  if(number==57) return ui->label_86;
  if(number==58) return ui->label_87;
  if(number==59) return ui->label_88;
  if(number==60) return ui->label_89;
  if(number==61) return ui->label_90;
  if(number==62) return ui->label_91;
  if(number==63) return ui->label_92;
  if(number==64) return ui->label_93;
  if(number==65) return ui->label_94;
  if(number==66) return ui->label_95;
  if(number==67) return ui->label_96;
  if(number==68) return ui->label_97;
  if(number==69) return ui->label_98;
  if(number==70) return ui->label_99;
  if(number==71) return ui->label_100;
  if(number==72) return ui->label_101;
  if(number==73) return ui->label_102;
  if(number==74) return ui->label_103;
  if(number==75) return ui->label_104;
  if(number==76) return ui->label_105;
  if(number==77) return ui->label_106;
  if(number==78) return ui->label_107;
  if(number==79) return ui->label_108;
  if(number==80) return ui->label_109;
  if(number==81) return ui->label_110;
  if(number==82) return ui->label_111;
  if(number==83) return ui->label_112;
  if(number==84) return ui->label_113;
  if(number==85) return ui->label_114;
  if(number==86) return ui->label_115;
  if(number==87) return ui->label_116;
  if(number==88) return ui->label_117;
  if(number==89) return ui->label_118;
  if(number==90) return ui->label_119;
  if(number==91) return ui->label_120;
  if(number==92) return ui->label_121;
  if(number==93) return ui->label_122;
  if(number==94) return ui->label_123;
  if(number==95) return ui->label_124;
  if(number==96) return ui->label_125;
  if(number==97) return ui->label_126;
  if(number==98) return ui->label_127;
  if(number==99) return ui->label_128;
  if(number==100) return ui->label_129;
  if(number==101) return ui->label_130;
  if(number==102) return ui->label_131;
  if(number==103) return ui->label_132;
  if(number==104) return ui->label_133;
  if(number==105) return ui->label_134;
  if(number==106) return ui->label_135;
  if(number==107) return ui->label_136;
  if(number==108) return ui->label_137;
  if(number==109) return ui->label_138;
  if(number==110) return ui->label_139;
  if(number==111) return ui->label_140;
  if(number==112) return ui->label_141;
  if(number==113) return ui->label_142;
  if(number==114) return ui->label_143;
  if(number==115) return ui->label_144;
  if(number==116) return ui->label_145;
  if(number==117) return ui->label_146;
  if(number==118) return ui->label_147;
  if(number==119) return ui->label_148;
  if(number==120) return ui->label_149;
  if(number==121) return ui->label_150;
  if(number==122) return ui->label_151;
  if(number==123) return ui->label_152;
  if(number==124) return ui->label_153;
  if(number==125) return ui->label_154;
  if(number==126) return ui->label_155;
  if(number==127) return ui->label_156;
  if(number==128) return ui->label_157;
  if(number==129) return ui->label_158;
  if(number==130) return ui->label_159;
  if(number==131) return ui->label_160;
  if(number==132) return ui->label_161;
  if(number==133) return ui->label_162;
  if(number==134) return ui->label_163;
  if(number==135) return ui->label_164;
  if(number==136) return ui->label_165;
  if(number==137) return ui->label_166;
  if(number==138) return ui->label_167;
  if(number==139) return ui->label_168;
  if(number==140) return ui->label_169;
  if(number==141) return ui->label_170;
  if(number==142) return ui->label_171;
  if(number==143) return ui->label_172;
  if(number==144) return ui->label_173;
  if(number==145) return ui->label_174;
  if(number==146) return ui->label_175;
  if(number==147) return ui->label_176;
  if(number==148) return ui->label_177;
  if(number==149) return ui->label_178;
  if(number==150) return ui->label_179;
  if(number==151) return ui->label_180;
  if(number==152) return ui->label_181;
  if(number==153) return ui->label_182;
  if(number==154) return ui->label_183;
  if(number==155) return ui->label_184;
  if(number==156) return ui->label_185;
  if(number==157) return ui->label_186;
  if(number==158) return ui->label_187;
  if(number==159) return ui->label_188;
  if(number==160) return ui->label_189;
  if(number==161) return ui->label_190;
  if(number==162) return ui->label_191;
  if(number==163) return ui->label_192;
  if(number==164) return ui->label_193;
  if(number==165) return ui->label_194;
  if(number==166) return ui->label_195;
  if(number==167) return ui->label_196;
  if(number==168) return ui->label_197;
  if(number==169) return ui->label_198;
  if(number==170) return ui->label_199;
  if(number==171) return ui->label_200;
  if(number==172) return ui->label_201;
  if(number==173) return ui->label_202;
  if(number==174) return ui->label_203;
  if(number==175) return ui->label_204;
  if(number==176) return ui->label_205;
  if(number==177) return ui->label_206;
  if(number==178) return ui->label_207;
  if(number==179) return ui->label_208;
  if(number==180) return ui->label_210;
  if(number==181) return ui->label_210;
  if(number==182) return ui->label_211;
  if(number==183) return ui->label_212;
  if(number==184) return ui->label_213;
  if(number==185) return ui->label_214;
  if(number==186) return ui->label_215;
  if(number==187) return ui->label_216;
  if(number==188) return ui->label_217;
  if(number==189) return ui->label_218;
  if(number==190) return ui->label_219;
  if(number==191) return ui->label_220;
  if(number==192) return ui->label_221;
  if(number==193) return ui->label_222;
  if(number==194) return ui->label_223;
  if(number==195) return ui->label_224;
  if(number==196) return ui->label_225;
  if(number==197) return ui->label_226;
  if(number==198) return ui->label_227;
  if(number==199) return ui->label_228;
  if(number==200) return ui->label_229;
  if(number==201) return ui->label_230;
  if(number==202) return ui->label_231;
  if(number==203) return ui->label_232;
  if(number==204) return ui->label_233;
  if(number==205) return ui->label_234;
  if(number==206) return ui->label_235;
  if(number==207) return ui->label_236;
  if(number==208) return ui->label_237;
  if(number==209) return ui->label_238;
  if(number==210) return ui->label_239;
  if(number==211) return ui->label_240;
  if(number==212) return ui->label_241;
  if(number==213) return ui->label_242;
  if(number==214) return ui->label_243;
  if(number==215) return ui->label_244;
  if(number==216) return ui->label_245;
  if(number==217) return ui->label_246;
  if(number==218) return ui->label_247;
  if(number==219) return ui->label_248;
  if(number==220) return ui->label_249;
  if(number==221) return ui->label_250;
  if(number==222) return ui->label_251;
  if(number==223) return ui->label_252;
  if(number==224) return ui->label_253;
}

void Widget::on_pushButton_released()
{
  if (playing==true){
      int a = ui->spinBox->value();
      int b = ui->spinBox_2->value();
      int x = (a-71)/31;
      int y = int ((b-32)/25);
      if (can==true){

          qDebug()<<x;
          qDebug()<<y;
          QLabel *lb;
          if(71<a&&a<531&&31<b&&b<399){
            if (y==0){
                lb=label(x);
              }
            else {
                qDebug()<<x+(15*y);
                lb=label(x+(15*y));
              }

            if (lb->text()=="0"){
                lb->setText(ui->pushButton->text());
                QString nombre= ui->pushButton->text().at(0);
                string nombre2 = nombre.toStdString();
                char a = nombre2.at(0);
                used.Add(a,x,y);
                ui->pushButton->setText("0");
            }
        }
        }
      else{
          if(x==7 && y==7){
              QLabel *lb;
              lb=label(112);
              if (lb->text()=="0"){
                  lb->setText(ui->pushButton->text());
                  QString nombre= ui->pushButton->text().at(0);
                  string nombre2 = nombre.toStdString();
                  char a = nombre2.at(0);
                  used.Add(a,x,y);
                  ui->pushButton->setText("0");
                  can=true;
            }
        }
    }
    }

}

void Widget::on_pushButton_2_released()
{
  if (playing==true){
  int a = ui->spinBox->value();
  int b = ui->spinBox_2->value();
  int x = (a-71)/31;
  int y = int ((b-32)/25);
  if (can==true){

      qDebug()<<x;
      qDebug()<<y;
      QLabel *lb;
      if(71<a&&a<531&&31<b&&b<399){
        if (y==0){
            lb=label(x);
          }
        else {
            qDebug()<<x+(15*y);
            lb=label(x+(15*y));
          }

        if (lb->text()=="0"){
            lb->setText(ui->pushButton_2->text());
            QString nombre= ui->pushButton_2->text().at(0);
            string nombre2 = nombre.toStdString();
            char a = nombre2.at(0);
            used.Add(a,x,y);
            ui->pushButton_2->setText("0");
        }
    }
    }
  else{
      if(x==7 && y==7){
          QLabel *lb;
          lb=label(112);
          if (lb->text()=="0"){
              lb->setText(ui->pushButton_2->text());
              QString nombre= ui->pushButton_2->text().at(0);
              string nombre2 = nombre.toStdString();
              char a = nombre2.at(0);
              used.Add(a,x,y);
              ui->pushButton_2->setText("0");
              can=true;
        }
    }
}
}
}

void Widget::on_pushButton_3_released()
{
  if (playing==true){
  int a = ui->spinBox->value();
  int b = ui->spinBox_2->value();
  int x = (a-71)/31;
  int y = int ((b-32)/25);
  if (can==true){

      qDebug()<<x;
      qDebug()<<y;
      QLabel *lb;
      if(71<a&&a<531&&31<b&&b<399){
        if (y==0){
            lb=label(x);
          }
        else {
            qDebug()<<x+(15*y);
            lb=label(x+(15*y));
          }

        if (lb->text()=="0"){
            lb->setText(ui->pushButton_3->text());
            QString nombre= ui->pushButton_3->text().at(0);
            string nombre2 = nombre.toStdString();
            char a = nombre2.at(0);
            used.Add(a,x,y);
            ui->pushButton_3->setText("0");
        }
    }
    }
  else{
      if(x==7 && y==7){
          QLabel *lb;
          lb=label(112);
          if (lb->text()=="0"){
              lb->setText(ui->pushButton_3->text());
              QString nombre= ui->pushButton_3->text().at(0);
              string nombre2 = nombre.toStdString();
              char a = nombre2.at(0);
              used.Add(a,x,y);
              ui->pushButton_3->setText("0");
              can=true;
            }
    }
}
}
}


void Widget::on_pushButton_4_pressed()
{
  if (playing==true){
  int a = ui->spinBox->value();
  int b = ui->spinBox_2->value();
  int x = (a-71)/31;
  int y = int ((b-32)/25);
  if (can==true){

      qDebug()<<x;
      qDebug()<<y;
      QLabel *lb;
      if(71<a&&a<531&&31<b&&b<399){
        if (y==0){
            lb=label(x);
          }
        else {
            qDebug()<<x+(15*y);
            lb=label(x+(15*y));
          }

        if (lb->text()=="0"){
            lb->setText(ui->pushButton_4->text());
            QString nombre= ui->pushButton_4->text().at(0);
            string nombre2 = nombre.toStdString();
            char a = nombre2.at(0);
            used.Add(a,x,y);
            ui->pushButton_4->setText("0");
        }
    }
    }
  else{
      if(x==7 && y==7){
          QLabel *lb;
          lb=label(112);
          if (lb->text()=="0"){
              lb->setText(ui->pushButton_4->text());
              QString nombre= ui->pushButton_4->text().at(0);
              string nombre2 = nombre.toStdString();
              char a = nombre2.at(0);
              used.Add(a,x,y);
              ui->pushButton_4->setText("0");
              can=true;
        }
    }
}
    }
}

void Widget::on_pushButton_5_released()
{
  if (playing==true){
  int a = ui->spinBox->value();
  int b = ui->spinBox_2->value();
  int x = (a-71)/31;
  int y = int ((b-32)/25);
  if (can==true){

      qDebug()<<x;
      qDebug()<<y;
      QLabel *lb;
      if(71<a&&a<531&&31<b&&b<399){
        if (y==0){
            lb=label(x);\
          }
        else {
            qDebug()<<x+(15*y);
            lb=label(x+(15*y));
          }

        if (lb->text()=="0"){
            lb->setText(ui->pushButton_5->text());
            QString nombre= ui->pushButton_5->text().at(0);
            string nombre2 = nombre.toStdString();
            char a = nombre2.at(0);
            used.Add(a,x,y);
            ui->pushButton_5->setText("0");
          }
    }
    }
  else{
      if(x==7 && y==7){
          QLabel *lb;
          lb=label(112);
          if (lb->text()=="0"){
              lb->setText(ui->pushButton_5->text());
              QString nombre= ui->pushButton_5->text().at(0);
              string nombre2 = nombre.toStdString();
              char a = nombre2.at(0);
              used.Add(a,x,y);
              ui->pushButton_5->setText("0");
              can=true;
            }
    }
}
}
}

void Widget::on_pushButton_6_released()
{
  if (playing==true){
  int a = ui->spinBox->value();
  int b = ui->spinBox_2->value();
  int x = (a-71)/31;
  int y = int ((b-32)/25);
  if (can==true){

      qDebug()<<x;
      qDebug()<<y;
      QLabel *lb;
      if(71<a&&a<531&&31<b&&b<399){
        if (y==0){
            lb=label(x);
          }
        else {
            qDebug()<<x+(15*y);
            lb=label(x+(15*y));
          }

        if (lb->text()=="0"){
            lb->setText(ui->pushButton_6->text());
            QString nombre= ui->pushButton_6->text().at(0);
            string nombre2 = nombre.toStdString();
            char a = nombre2.at(0);
            used.Add(a,x,y);
            ui->pushButton_6->setText("0");
        }
    }
    }
  else{
      if(x==7 && y==7){
          QLabel *lb;
          lb=label(112);
          if (lb->text()=="0"){
              lb->setText(ui->pushButton_6->text());
              QString nombre= ui->pushButton_6->text().at(0);
              string nombre2 = nombre.toStdString();
              char a = nombre2.at(0);
              used.Add(a,x,y);
              ui->pushButton_6->setText("0");
              can=true;
            }\
    }
}
}
}

void Widget::on_pushButton_7_released()
{
if (playing==true){
  int a = ui->spinBox->value();
  int b = ui->spinBox_2->value();
  int x = (a-71)/31;
  int y = int ((b-32)/25);
  if (can==true){

      qDebug()<<x;
      qDebug()<<y;
      QLabel *lb;
      if(71<a&&a<531&&31<b&&b<399){
        if (y==0){
            lb=label(x);
          }
        else {
            qDebug()<<x+(15*y);
            lb=label(x+(15*y));
          }

        if (lb->text()=="0"){
            lb->setText(ui->pushButton_7->text());
            QString nombre= ui->pushButton_7->text().at(0);
            string nombre2 = nombre.toStdString();
            char a = nombre2.at(0);
            used.Add(a,x,y);
            ui->pushButton_7->setText("0");
        }
    }
    }
  else{
      if(x==7 && y==7){
          QLabel *lb;
          lb=label(112);
          if (lb->text()=="0"){
              lb->setText(ui->pushButton_7->text());
              QString nombre= ui->pushButton_7->text().at(0);
              string nombre2 = nombre.toStdString();
              char a = nombre2.at(0);
              used.Add(a,x,y);
              ui->pushButton_7->setText("0");
              can=true;
        }
    }
}
}
}

void Widget::on_pushButton_8_released()
{
if (playing==true){
  int a = ui->spinBox->value();
  int b = ui->spinBox_2->value();
  int x = (a-71)/31;
  int y = int ((b-32)/25);
  if (can==true){

      qDebug()<<x;
      qDebug()<<y;
      QLabel *lb;
      if(71<a&&a<531&&31<b&&b<399){
        if (y==0){
            lb=label(x);
          }
        else {
            qDebug()<<x+(15*y);
            lb=label(x+(15*y));
          }

        if (lb->text()=="0"){
            lb->setText(ui->pushButton_8->text());
            QString nombre= ui->pushButton_8->text().at(0);
            string nombre2 = nombre.toStdString();
            char a = nombre2.at(0);
            used.Add(a,x,y);
            ui->pushButton_8->setText("0");

        }
    }
    }
  else{
      if(x==7 && y==7){
          QLabel *lb;
          lb=label(112);
          if (lb->text()=="0"){
              lb->setText(ui->pushButton_8->text());
              QString nombre= ui->pushButton_8->text().at(0);
              string nombre2 = nombre.toStdString();
              char a = nombre2.at(0);
              used.Add(a,x,y);
              ui->pushButton_8->setText("0");
              can=true;
        }
    }
}
}
}
void Widget::on_pushButton_9_released()
{
    probar(used);
    used.Showchar();

}

void Widget::probar(LinkedList used){
  if (used.size()!=0){
      std::cout<<used.size()<<"aaaaaaaa";
      used.Showchar();
      bool que= true;
      int refx=used.getposo(0)->getPosX();
      int refy=used.getposo(0)->getPosY();
      for (int i=0;i<used.size();i++){
          if (used.getposo(i)->getPosX()==refx){}
          else{
              que=false;
            }
        }
      if (que==false){
          que=true;
          for (int i=0;i<used.size();i++){
              if (used.getposo(i)->getPosY()==refy){}
              else{
                  que=false;
                }
            }
          if (que==true){std::cout<<"vvv";
              playing=false;}
        }
      else {
          std::cout<<"vvv";
          playing=false;
        }
}

}





void Widget::on_pushButton_10_pressed()
{
  ui->label_20->setText(name);
  ui->label_22->setNum(id);
  ui->pushButton_10->hide();
}
