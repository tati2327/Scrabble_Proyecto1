#ifndef PRUEBAJSON_JSON_H
#define PRUEBAJSON_JSON_H

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
        void request1(int _id, string _name, int _players);
        void request2(string _name, string _letter, int _x, int _y);
        void request3(string _name);
        void request4(string _name, bool _accept, int _score, bool _playing);
        void request5(string _name, bool _add);
        void stringifyJSON();

    private:
        Document document;

};


#endif //PRUEBAJSON_JSON_H
