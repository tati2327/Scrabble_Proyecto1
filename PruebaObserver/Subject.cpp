#include "Subject.h"
#include "Subject.h"
#include <algorithm>

using namespace std;

void Subject::Attach(Client *shop){
    list.push_back(shop);
}

void Subject::Detach(Client *shop){
    list.erase(std::remove(list.begin(), list.end(), shop), list.end());
}

void Subject::Notify(float price){
    for(vector<Client*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(price);
        }
    }
}
