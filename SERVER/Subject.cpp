//
// Created by pablo on 07/04/19.
//

#include "Subject.h"
#include "Subject.h"
#include <algorithm>

using namespace std;

void Subject::Attach(Client *client){
    list.push_back(client);
}

void Subject::Detach(Client *client){
    list.erase(std::remove(list.begin(), list.end(), client), list.end());
}

void Subject::Notify(Board _board){
    for(vector<Client*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(_board);
        }
    }
}
