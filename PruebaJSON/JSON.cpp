#include <cstdio>
#include <cstring>
#include "JSON.h"

/*!-------------------------------------------------------------------------------------------------------------------------------
 *      1. Analizar una cadena de texto JSON a un documento.
 *--------------------------------------------------------------------------------------------------------------------------------*/

void JSON::jsonToDocument(){

    const char jsonInitGame[] = " { \"solicitud\" : 12,  \"id\" : 12, \"name\" : \"_name\", \"letter\" : \"_letter\", \"x\": 1, \"y\": 3, \"accept\" : true, \"score\": 1, \"playing\": true, \"add\" : true } ";
    cout << "Original JSON: " << jsonInitGame << endl;

    document.Parse(jsonInitGame);

    cout<<"Parsing to document succeeded"<<endl;
}

void JSON::accesToDocument() {
    cout << "Access values in document: "<<endl;
    assert(document.IsObject()); /*! El documento es un valor JSON que representa la raíz de DOM. La raíz puede ser un objeto o una matriz.*/

    /*! PARA SOLICITUD*/
    assert(document["solicitud"].IsNumber());   /*!< Number is a JSON type, but C++ needs more specific type.*/
    assert(document["solicitud"].IsInt());
    cout<<"solicitud = " <<document["solicitud"].GetInt()<<endl;

    /*! PARA ID*/
    assert(document["id"].IsNumber());
    assert(document["id"].IsInt());
    cout<<"id = " <<document["id"].GetInt()<<endl;

    /*! PARA NAME*/
    assert(document.HasMember("name"));
    assert(document["name"].IsString());
    cout<<"name = "<<document["name"].GetString()<<endl;

    Value::MemberIterator name = document.FindMember("name");
    assert(name != document.MemberEnd());
    assert(name->value.IsString());
    assert(strcmp("_name", name->value.GetString()) == 0);
    (void) name;

    /*! PARA LETTER*/
    assert(document.HasMember("letter"));
    assert(document["letter"].IsString());
    cout<<"letter = "<<document["letter"].GetString()<<endl;

    Value::MemberIterator letter = document.FindMember("letter");
    assert(letter != document.MemberEnd());
    assert(letter->value.IsString());
    assert(strcmp("_letter", letter->value.GetString()) == 0);
    (void) letter;

    /*! PARA X*/
    assert(document["x"].IsNumber());
    assert(document["x"].IsInt());
    cout<<"x = " <<document["x"].GetInt()<<endl;

    /*! PARA Y*/
    assert(document["y"].IsNumber());
    assert(document["y"].IsInt());
    cout<<"y = " <<document["y"].GetInt()<<endl;

    /*! PARA ACCEPT*/
    assert(document["accept"].IsBool()); /*!< JSON true/false are bool. Can also uses more specific function IsTrue().*/
    cout<<"accept = "<<document["accept"].GetBool()<<endl;

    /*! PARA SCORE*/
    assert(document["id"].IsNumber());
    assert(document["id"].IsInt());
    cout<<"id = " <<document["id"].GetInt()<<endl;

    /*! PARA PLAYING*/
    assert(document["playing"].IsBool());
    cout<<"playing = "<<document["playing"].GetBool()<<endl;

    /*! PARA ADD*/
    assert(document["add"].IsBool());
    cout<<"add = "<<document["add"].GetBool()<<endl;
}
