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

/*! El documento es un valor JSON que representa la raíz de DOM. La raíz puede ser un objeto o una matriz.*/

void JSON::accesToDocument(int request) {
    cout << "Access values in document: "<<endl;
    assert(document.IsObject());

    /*! PARA SOLICITUD*/
    assert(document["request"].IsNumber());   /*!< Number is a JSON type, but C++ needs more specific type.*/
    assert(document["request"].IsInt());
    cout<<"request = " <<document["request"].GetInt()<<endl;

    if(request == 1) {
        /*! PARA ID*/
        assert(document["id"].IsNumber());
        assert(document["id"].IsInt());
        cout << "id = " << document["id"].GetInt() << endl;

        /*! PARA PLAYERS*/
        assert(document["players"].IsNumber());
        assert(document["players"].IsInt());
        cout << "players = " << document["players"].GetInt() << endl;
    }

    /*! PARA NAME*/
    assert(document.HasMember("name"));
    assert(document["name"].IsString());
    cout<<"name = "<<document["name"].GetString()<<endl;

    Value::MemberIterator name = document.FindMember("name");
    assert(name != document.MemberEnd());
    assert(name->value.IsString());
    assert(strcmp("_name", name->value.GetString()) == 0);
    (void) name;

    if(request == 2) {
        /*! PARA LETTER*/
        assert(document.HasMember("letter"));
        assert(document["letter"].IsString());
        cout << "letter = " << document["letter"].GetString() << endl;

        Value::MemberIterator letter = document.FindMember("letter");
        assert(letter != document.MemberEnd());
        assert(letter->value.IsString());
        assert(strcmp("_letter", letter->value.GetString()) == 0);
        (void) letter;

        /*! PARA X*/
        assert(document["x"].IsNumber());
        assert(document["x"].IsInt());
        cout << "x = " << document["x"].GetInt() << endl;

        /*! PARA Y*/
        assert(document["y"].IsNumber());
        assert(document["y"].IsInt());
        cout << "y = " << document["y"].GetInt() << endl;
    }

    if(request == 4) {
        /*! PARA ACCEPT*/
        assert(document["accept"].IsBool()); /*!< JSON true/false are bool. Can also uses more specific function IsTrue().*/
        cout << "accept = " << document["accept"].GetBool() << endl;

        /*! PARA SCORE*/
        assert(document["id"].IsNumber());
        assert(document["id"].IsInt());
        cout << "id = " << document["id"].GetInt() << endl;

        /*! PARA PLAYING*/
        assert(document["playing"].IsBool());
        cout << "playing = " << document["playing"].GetBool() << endl;
    }

    if(request == 5) {
        /*! PARA ADD*/
        assert(document["add"].IsBool());
        cout << "add = " << document["add"].GetBool() << endl;
    }
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

void JSON::stringifyJSON() {
    cout<<"Modified JSON with reformatting: "<<endl;
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);
    document.Accept(writer);    // Accept() traverses the DOM and generates Handler events.
    puts(sb.GetString());
}