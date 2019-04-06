#ifndef PRUEBAOBSERVER_PRODUCT_H
#define PRUEBAOBSERVER_PRODUCT_H

#include "Subject.h"

class Product : public Subject {
    public:
        void ChangePrice(float price);
};

#endif //PRUEBAOBSERVER_PRODUCT_H
