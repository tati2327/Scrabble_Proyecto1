#include <iostream>
#include "Product.h"

int main() {
    Product product;

    // We have four shops wanting to keep updated price set by product owner
    Client C1("Shop 1");
    Client C2("Shop 2");

    product.Attach(&C1);
    product.Attach(&C2);

    //Now lets try changing the products price, this should update the shops automatically
    product.ChangePrice(23.0f);

    //Now shop2 is not interested in new prices so they unsubscribe
    product.Detach(&C2);

    //Now lets try changing the products price again
    product.ChangePrice(26.0f);

    getchar();
    return 0;
}