#include <iostream>
#include <allocators.h>
#include <cstdio>
#include <document.h>
#include <prettywriter.h>
#include <fwd.h>
#include <stringbuffer.h>
#include "JSON.h"

using namespace rapidjson;
using namespace std;

int main(int, char*[]) {

    JSON j;
    j.jsonToDocument(1);
    j.accesToDocument(1);
    j.request1(45, "ss",4);
    j.stringifyJSON();
}
