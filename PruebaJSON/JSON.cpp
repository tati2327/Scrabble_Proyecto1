#include <cstdio>
#include <cstring>
#include "JSON.h"

/*!-------------------------------------------------------------------------------------------------------------------------------
 *      1. Analizar una cadena de texto JSON a un documento.
 *--------------------------------------------------------------------------------------------------------------------------------*/

char JSON::jsonToDocument(){

    const char jsonInitGame[] = " { \"solicitud\" : 12,  \"id\" : 12, \"name\" : \"_name\", \"letter\" : \"_letter\", \"x\": 1, \"y\": 3, \"accept\" : true, \"score\": 1, \"playing\": true, \"add\" : true } ";
    cout << "Original JSON: " << jsonInitGame << endl;

    #if 0
        // "normal" parsing, decode strings to new buffers. Can use other input stream via ParseStream().
                        if (document.Parse(json).HasParseError())
                            return 1;
    #else
        // In-situ parsing, decode strings directly in the source string. Source must be string.
        char buffer[sizeof(jsonInitGame)];
        memcpy(buffer, jsonInitGame, sizeof(jsonInitGame));
        if (document.ParseInsitu(buffer).HasParseError())
            return 1;
    #endif

    printf("\nParsing to document succeeded.\n");
}
