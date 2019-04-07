#include <cstdlib>
#include "linkedlist.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList(){
    Tmp = nullptr;
    Head = nullptr;
    Curr = nullptr;
}
 /*----------------------------------------------------------------------------------------------------------*/
void LinkedList::Add(char _data) { /*!<Agrega por dato char*/

    Node* newPtr = new Node(_data); /*! Se usa el new sobrecargado para agregar un char a una lista*/

    if (Head != nullptr){
        /*! Curr es un puntero que nos ayuda a recorrer la lista
         * hasta llegar al ultimo elemento que es el que apunta a nullptr*/
        Curr = Head;

        while (Curr->getNext() != nullptr){
            Curr = Curr->getNext();
        }
        /*! Cuando se llega al final se asigna a que el ultimo ya no apunte a NULL sino
         * al nuevo Nodo agregado y este apuntara a nullptr*/
        Curr->setNext(newPtr);
    }
    else {
        /*! Si Head==NULL significa que no hay elementos por lo cual se "agrega" al principio */
        Head = newPtr;
    }
}

/*----------------------------------------------------------------------------------------------------------*/
/*! Mismo funcionamiento que el Add anterior, este tiene la diferencia que declara los punteros N0, N1, ... ,
 * N14 como referencias a las filas de la matriz*/
void LinkedList::Add(char _data,int x, int y) { /*!<Agrega por dato int*/
    Node* newPtr = new Node(_data,x,y);

    if (x==0){                            /*! En esta linea se asignan los punteros a los inicios de cada fila*/
        if (y==0) N0 = newPtr;
        if (y==1) N1 = newPtr;
        if (y==2) N2 = newPtr;
        if (y==3) N3 = newPtr;
        if (y==4) N4 = newPtr;
        if (y==5) N5 = newPtr;
        if (y==6) N6 = newPtr;
        if (y==7) N7 = newPtr;
        if (y==8) N8 = newPtr;
        if (y==9) N9 = newPtr;
        if (y==10) N10 = newPtr;
        if (y==11) N11 = newPtr;
        if (y==12) N12 = newPtr;
        if (y==13) N13 = newPtr;
        if (y==14) N14 = newPtr;
    }

    if (Head != nullptr){
        Curr = Head;
        while (Curr->getNext() != nullptr){
            Curr = Curr->getNext();
        }
        Curr->setNext(newPtr);
    }
    else{
        Head = newPtr;
    }
}

/*----------------------------------------------------------------------------------------------------------*/
/*! Mismo funcionamiento que el Add anterior */
void LinkedList::Add(int _data) {
    Node* newPtr = new Node(_data);

    if (Head != nullptr){
        Curr = Head;
        while (Curr->getNext() != nullptr){
            Curr = Curr->getNext();
        }
        Curr->setNext(newPtr);
    }
    else{
        Head = newPtr;
    }
}

/*----------------------------------------------------------------------------------------------------------*/

void LinkedList::Delete(char data) {    /*! <Borra por dato*/
    Node* deleted = nullptr;            /*! Aqui se tienen que usar tanto el Tmp como el Curr
                                         * ya que como se va a borrar un elemento en una lista que solo
                                         * tiene next se borra el Curr y el Tmp que siempre va a estar uno atras
                                         * del Curr se le asigna como siguiente el siguiente del Curr por lo cual
                                         * este queda "flotando y luego se borra"*/
    Tmp = Head;
    Curr = Head;

    while (Curr != nullptr && Curr->getLetter() != data){
                                        /*! Aqui se nota como el Tmp esta antes del Curr y se recorre la lista hasta
                                         * encontrar el valor*/
        Tmp=Curr;
        Curr = Curr->getNext();
    }

    if (Curr == nullptr){               /*! Como se puede borrar por dato puede ser que no se encuentre, si el Curr
                                         * llegara a ser nullptr despues de recorrer toda la lista significa que
                                         * no lo logro encontrar*/
        cout<<"Not found";
        delete(deleted);                 /*! Se borrar el puntero deleted*/
    }
    else{
        deleted=Curr;                   /*!Se asigna el puntero deleted el valor de Curr que es el puntero o nodo que se
                                        * desea borrar, y se asigna a otra variable porque todvia necesitamos el puntero
                                        * Curr y su siguiente para unir las listas despues de eliminar el elemento*/
        Curr = Curr->getNext();
        Tmp->setNext(Curr);

        if (deleted==Head){             /*!Si se borra el Head se vuelve a asignar*/
            Head = Head->getNext();
            Tmp = nullptr;
        }
        delete(deleted);                 /*!Se hace delete que ya esta sobrecargado*/
    }
}

/*----------------------------------------------------------------------------------------------------------*/

void LinkedList::Delete(int pos) {    /*! <Borra por posicion, mismo funcionamiento que el Delete por char*/
    Node* deleted = nullptr;
    Tmp = Head;
    Curr = Head;
    int count = 0;

    while (Curr != nullptr && count!=pos){
        Tmp=Curr;
        Curr = Curr->getNext();
        count= count+1;
    }

    if (Curr == nullptr){
        cout<<"Not found";
        delete(deleted);
    }
    else{
        deleted=Curr;
        Curr = Curr->getNext();
        Tmp->setNext(Curr);

        if (deleted==Head){
            Head = Head->getNext();
            Tmp = nullptr;
        }
        delete(deleted);
    }
}

/*----------------------------------------------------------------------------------------------------------*/
void LinkedList::Delete(int posx, int posy) {
    Node* deleted = nullptr;
    Tmp = Head;
    Curr = Head;

    while (Curr != nullptr && Curr->getPosY()==posy && Curr->getPosX()==posx){
        Tmp=Curr;
        Curr = Curr->getNext();
    }

    if (Curr == nullptr){
        cout<<"Not found";
        delete(deleted);
    }
    else{
        deleted=Curr;
        Curr = Curr->getNext();
        Tmp->setNext(Curr);
        if (deleted==Head){
            Head = Head->getNext();
            Tmp = nullptr;
        }
        delete(deleted);
    }

}
/*----------------------------------------------------------------------------------------------------------*/
void LinkedList::Showmat(){ /*!<Imprime la matriz de juego*/
    Curr = Head;
    int cont= 0;
    for(int i=0; i<15;i++){
    cout << "L" << " " << "ML" << " " << "MP    ";}
    cout<< endl;

    while (Curr != nullptr) {
        cout << Curr->getLetter()<< " " << Curr->getMultiplierL()<<" " << Curr->getMultiplierP() <<"  ->  ";
        Curr = Curr->getNext();
        cont=cont+1;

        if (cont==15){
            cout<<endl;
            cont=0;
        }
        else{}
    }
    cout<<endl;
}

/*----------------------------------------------------------------------------------------------------------*/

void LinkedList::Showchar() { /*! <Muestra la lista hecha por char*/
    Curr = Head;
    while (Curr!= nullptr){
        cout << Curr->getLetter() << "->"; /*! Se recorre la lista con Curr y Curr.next*/
        Curr = Curr->getNext(); /*! En cada punto imprime el char */
    }
    cout<<endl;
}

/*----------------------------------------------------------------------------------------------------------*/
void LinkedList::Showint() {  /*!< Muestra la lista hecha por int*/
    Curr = Head;
    while (Curr!= nullptr){
        cout << Curr->getValue() << "->";
        Curr = Curr->getNext();
    }
    cout<<endl;
}

/*----------------------------------------------------------------------------------------------------------*/
bool LinkedList::Seek(int number) {
    Curr=Head;
    while(Curr != nullptr && Curr->getValue()!=number){
        Curr=Curr->getNext();
    }

    if (Curr == nullptr){
        return false;
    }
    else{
        return true;
    }
}
int LinkedList::bringint(int pos){
  Curr=Head;
  int count=0;

  while(count!=pos){              /*! Como se hace por posicion la busqueda se va recorriendo la lista con el
                                   * .getNext() y se aumenta un count para que cuando haga match con la posicion
                                   * lo retorne*/
      Curr=Curr->getNext();
      count=count+1;
  }
  int result = Curr->getValue();     /*! Se asigna un char porque el nodo se borra de la lista */
  Delete(pos);                         /*! Eliminacion del nodo*/
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
char LinkedList::bring(int pos) { /*! <Devuleve un char segun la posicion que se le de*/
    Curr=Head;
    int count=0;

    while(count!=pos){              /*! Como se hace por posicion la busqueda se va recorriendo la lista con el
                                     * .getNext() y se aumenta un count para que cuando haga match con la posicion
                                     * lo retorne*/
        Curr=Curr->getNext();
        count=count+1;
    }
    char result = Curr->getLetter();     /*! Se asigna un char porque el nodo se borra de la lista */
    Delete(pos);                         /*! Eliminacion del nodo*/
    return result;
}
Node* LinkedList::getposo(int pos) { /*! <Devuleve un char segun la posicion que se le de*/
    Curr=Head;
    int count=0;

    while(count!=pos){
        Curr=Curr->getNext();
        count=count+1;
    }
    return Curr;
}

/*----------------------------------------------------------------------------------------------------------*/
int LinkedList::size() {         /*! <Retorna la dimension de la lista  */
    Curr=Head;
    int count=0;

    while(Curr != nullptr){     /*! La lista se recorre con .getNext() y se tiene un contador para que
                                 *  crezca segun se recorra la lista*/
        Curr=Curr->getNext();
        count=count+1;
    }

    cout<<count<<endl<<endl;
    return count;
}

/*----------------------------------------------------------------------------------------------------------*/
Node LinkedList::getLast() {
    Curr = Head;
    while (Curr->getNext()!= nullptr){
        Curr=Curr->getNext();
    }
    return *Curr;
}

/*----------------------------------------------------------------------------------------------------------*/
Node* LinkedList::getpos(int x, int y) {    /*! <Se retorna el puntero a un nodo de la matriz de juego*/
    Curr=pointer(y);                        /*! Para no recorrer toda la lista se asigna a Curr el puntero de
                                            * la fila en la que esta*/
    //Curr=Head;
    while (Curr!= nullptr){
        if (Curr->getPosX()==x && Curr->getPosY()==y){  /*! La validacion para encontrar el nodo es que la posx y posy
                                                         * y sean iguales*/
            return Curr;
        } else{
            Curr=Curr->getNext();
        }
    }
}

/*----------------------------------------------------------------------------------------------------------*/
void LinkedList::putletter(char data,int x, int y) {  /*! <Funcion para poner letras en el tablero*/
    getpos(x,y)->setLetter(data);
    Showmat();
}

/*----------------------------------------------------------------------------------------------------------*/
LinkedList LinkedList::moveletters(char *letters) {     /*! <Pasar un array de letras a lista*/
    LinkedList L1;
    int count=0;
    while(count<100){                                   /*! Como las letras de juego estan en un array y a este se
                                                         * puede acceder con indices se recorrer con el contador count
                                                         * de 0 a 100 y se agrega a una lista que luego sera retornada*/
        L1.Add(letters[count]);
        count=count+1;
    }
    return L1;
}

/*----------------------------------------------------------------------------------------------------------*/
void LinkedList::multipliers(){        /*! <Funcion para asignar a ciertos nodos multiplicadores, sirve solo para la
                                        * matriz de juego*/
    Node* Usable;

    for (int i=0;i<14;i++){
        if (i==6 || i==8){
            Usable=getpos(i,i);
            Usable->setMultiplierL(3);
            i++;
        }
        if (i==0){
            Usable=getpos(i,i);
            Usable->setMultiplierP(3);
            i++;
        }
        Usable = getpos(i,i);
        Usable->setMultiplierL(2);
    }

    Usable = getpos(14,14);
    Usable->setMultiplierP(3);
    Usable = getpos(0,14);
    Usable->setMultiplierP(3);
    Usable = getpos(14,0);
    Usable->setMultiplierP(3);
    Usable = getpos(0,7);
    Usable->setMultiplierP(3);
    Usable = getpos(7,0);
    Usable->setMultiplierP(3);
    Usable = getpos(14,7);
    Usable->setMultiplierP(3);
    Usable = getpos(7,14);
    Usable->setMultiplierP(3);

    for (int i=1; i<14;i++){
        for (int j=13;j>0;j--){
            if (i==8 || i==6){
                if (i+j==14) {
                    Usable = getpos(i,j);
                    Usable->setMultiplierL(3);
                }
            }
            else{
                if (i+j==14){
                    Usable = getpos(i,j);
                    Usable->setMultiplierL(2);
            }
            }
        }
    }

    Usable = getpos(1,5);
    Usable->setMultiplierP(2);
    Usable = getpos(2,6);
    Usable->setMultiplierL(2);
    Usable = getpos(3,7);
    Usable->setMultiplierL(2);
    Usable = getpos(2,8);
    Usable->setMultiplierL(2);
    Usable = getpos(1,9);
    Usable->setMultiplierP(2);
    Usable = getpos(5,1);
    Usable->setMultiplierP(2);
    Usable = getpos(6,2);
    Usable->setMultiplierL(2);
    Usable = getpos(7,3);
    Usable->setMultiplierL(2);
    Usable = getpos(8,2);
    Usable->setMultiplierL(2);
    Usable = getpos(9,1);
    Usable->setMultiplierP(2);
    Usable = getpos(5,13);
    Usable->setMultiplierP(2);
    Usable = getpos(6,12);
    Usable->setMultiplierL(2);
    Usable = getpos(7,11);
    Usable->setMultiplierL(2);
    Usable = getpos(8,12);
    Usable->setMultiplierL(2);
    Usable = getpos(9,13);
    Usable->setMultiplierP(2);
    Usable = getpos(13,5);
    Usable->setMultiplierP(2);
    Usable = getpos(12,6);
    Usable->setMultiplierL(2);
    Usable = getpos(11,7);
    Usable->setMultiplierL(2);
    Usable = getpos(12,8);
    Usable->setMultiplierL(2);
    Usable = getpos(13,9);
    Usable->setMultiplierP(2);
}

/*----------------------------------------------------------------------------------------------------------*/
Node* LinkedList::pointer(int y) { /*! <Retorna el puntero al inicio de cada fila segun el valor de "y" que se le pase*/
    if (y==0) return N0;
    if (y==1) return N1;
    if (y==2) return N2;
    if (y==3) return N3;
    if (y==4) return N4;
    if (y==5) return N5;
    if (y==6) return N6;
    if (y==7) return N7;
    if (y==8) return N8;
    if (y==9) return N9;
    if (y==10) return N10;
    if (y==11) return N11;
    if (y==12) return N12;
    if (y==13) return N13;
    if (y==14) return N14;
}
