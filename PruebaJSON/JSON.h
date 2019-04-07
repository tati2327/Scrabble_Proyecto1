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
        char jsonToDocument();
        void accesToDocument();
        //void modifyDocument(int sol, int id, string name, string letter, int x, int y, bool accept, int score, bool playing, bool add);
        //void stringifyJSON();

    private:
        Document document;

};


#endif //PRUEBAJSON_JSON_H
