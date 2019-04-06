#ifndef PRUEBAOBSERVER_OBSERVER_H
#define PRUEBAOBSERVER_OBSERVER_H

class Observer {
    public:
        virtual void Update(float price) = 0;
};

#endif //PRUEBAOBSERVER_OBSERVER_H
