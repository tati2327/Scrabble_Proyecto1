#ifndef CLIENT_JSON_H
#define CLIENT_JSON_H

#include <iostream>
#include <allocators.h>
#include <cstdio>
#include <prettywriter.h>
#include <fwd.h>
#include <stringbuffer.h>
#include <document.h>

using namespace rapidjson;
using namespace std;


class JSON {
    public:

        int jsonToDocument(int request);
        void accesToDocument(int request);
        string stringifyJSON();

        int getX();
        int getY();
        int getId();
        int getScore();
        int getPlayers();
        int getRequest();

        string getName();
        string getLetter();

        bool getAdd();
        bool getAccept();
        bool getPlaying();

        void request1(int _id, string _name, int _players);
        void request2(string _name, string _letter, int _x, int _y);
        void request3(string _name);
        void request4(string _name, bool _accept, int _score, bool _playing);
        void request5(string _name, bool _add);

    private:
        Document document;
};


#endif //CLIENT_JSON_H
