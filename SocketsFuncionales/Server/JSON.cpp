#include <cstdio>
#include <cstring>
#include "JSON.h"

int JSON::jsonToDocument(int request) {
    /*! Iniciar Juego */
    if(request == 1) {
        char json[] = " { \"request\":1,  \"id\":0, \"name\" : \"_name\", \"players\" :0 } ";
        document.Parse(json);
    }
    /*! Putt Letter */
    if(request == 2) {
        char json[] = " { \"request\":2, \"name\" : \"_name\", \"letter\" : \"_letter\", \"x\":0, \"y\":0 } ";
        document.Parse(json);
    }
    /*! Send Word*/
    if(request == 3) {
        char json[] = " { \"request\":3, \"name\" : \"_name\" } ";
        document.Parse(json);
    }
    /*! Validate Word */
    if(request == 4) {
        char json[] = " { \"request\":4, \"name\" : \"_name\", \"accept\" : true, \"score\":0 } ";
        document.Parse(json);
    }
    /*! Accept request */
    if(request == 5) {
        char json[] = " { \"request\":5, \"name\" : \"_name\", \"add\" : true } ";
        document.Parse(json);
    }
}

int JSON::getX(){
    /*! PARA X*/
    assert(document["x"].IsNumber());
    assert(document["x"].IsInt());
    cout << "x = " << document["x"].GetInt() << endl;
    return document["x"].GetInt();
}

int JSON::getY(){
    /*! PARA Y*/
    assert(document["y"].IsNumber());
    assert(document["y"].IsInt());
    cout << "y = " << document["y"].GetInt() << endl;
    return document["y"].GetInt();
}

int JSON::getId(){
    /*! PARA ID*/
    assert(document["id"].IsNumber());
    assert(document["id"].IsInt());
    cout << "id = " << document["id"].GetInt() << endl;
    return  document["id"].GetInt();
}

int JSON::getScore(){
    /*! PARA SCORE*/
    assert(document["id"].IsNumber());
    assert(document["id"].IsInt());
    cout << "id = " << document["id"].GetInt() << endl;
    return document["id"].GetInt();
}

int JSON::getPlayers(){
    /*! PARA PLAYERS*/
    assert(document["players"].IsNumber());
    assert(document["players"].IsInt());
    cout << "players = " << document["players"].GetInt() << endl;
    return document["players"].GetInt();
}

string JSON::getName(){
    /*! PARA NAME*/
    assert(document.HasMember("name"));
    assert(document["name"].IsString());
    cout<<"name = "<<document["name"].GetString()<<endl;
    return document["name"].GetString();
}

string JSON::getLetter(){
    /*! PARA LETTER*/
    assert(document.HasMember("letter"));
    assert(document["letter"].IsString());
    cout << "letter = " << document["letter"].GetString() << endl;
    return document["letter"].GetString();
}

bool JSON::getAdd(){
    /*! PARA ADD*/
    assert(document["add"].IsBool());
    cout << "add = " << document["add"].GetBool() << endl;
    return document["add"].GetBool();
}

bool JSON::getAccept(){
    /*! PARA ACCEPT*/
    assert(document["accept"].IsBool()); /*!< JSON true/false are bool. Can also uses more specific function IsTrue().*/
    cout << "accept = " << document["accept"].GetBool() << endl;
    return document["accept"].GetBool();
}

bool JSON::getPlaying(){
    /*! PARA PLAYING*/
    assert(document["playing"].IsBool());
    cout << "playing = " << document["playing"].GetBool() << endl;
    return document["playing"].GetBool();
}

int JSON::getRequest(){
    /*! PARA SOLICITUD*/
    assert(document["request"].IsNumber());   /*!< Number is a JSON type, but C++ needs more specific type.*/
    assert(document["request"].IsInt());
    cout<<"request = " <<document["request"].GetInt()<<endl;
    return document["request"].GetInt();
}

/*! Iniciar Juego */
void JSON::request1(int _id, string _name, int _players) {
    /*! CAMBIAR ID*/
    { document["id"].SetInt(_id); }

    /*! CAMBIAR NAME*/
    { document["name"].SetString(_name.c_str(), _name.size()); }

    /*! CAMBIAR PLAYERS*/
    { document["players"].SetInt(_players); }
}

/*! Putt Letter */
void JSON::request2(string _name, string _letter, int _x, int _y) {
    /*! CAMBIAR NAME*/
    { document["name"].SetString(_name.c_str(), _name.size()); }

    /*! CAMBIAR LETTER*/
    { document["letter"] = "vcvcvc"; }

    /*! CAMBIAR X*/
    { document["x"] = _x; }

    /*! CAMBIAR Y*/
    { document["y"] = _y; }
}

/*! Send Word*/
void JSON::request3(string _name) {
    /*! CAMBIAR NAME*/
    { document["name"].SetString(_name.c_str(), _name.size()); }
}

/*! Validate Word */
void JSON::request4(string _name, bool _accept, int _score, bool _playing) {
    /*! CAMBIAR NAME*/
    { document["name"].SetString(_name.c_str(), _name.size()); }

    /*! CAMBIAR ACCEPT*/
    { document["accept"].SetBool(_accept); }

    /*! CAMBIAR SCORE*/
    { document["score"].SetBool(_score); }

    /*! CAMBIAR PLAYING*/
    { document["playing"].SetBool(_playing); }
}

/*! Accept request */
void JSON::request5(string _name, bool _add) {
    /*! CAMBIAR NAME*/
    { document["name"].SetString(_name.c_str(), _name.size()); }

    /*! CAMBIAR ADD*/
    { document["add"].SetBool(_add); }
}

string JSON::stringifyJSON() {
    cout<<"Modified JSON with reformatting: "<<endl;
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);
    document.Accept(writer);    // Accept() traverses the DOM and generates Handler events.
    string message = sb.GetString();
    return message;
}
