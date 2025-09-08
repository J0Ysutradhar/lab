#include <stdio.h>

union Product {
    int id;
    float price;
};

int main() {
    union Product p;

    p.id = 101;
    printf("Product ID: %d\n", p.id);

    p.price = 299.99;
    printf("Product Price: %.2f\n", p.price);


    printf("After storing price, ID becomes: %d\n", p.id);

    return 0;
}
