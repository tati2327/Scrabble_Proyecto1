#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H

#include "Subject.h"
#include "Board.h"

class Server : public Subject {
    public:
        void changeBoard(Board newBoard);
};

#endif //SERVER_SERVER_H
