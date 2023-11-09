#include <stdio.h>

struct shops {
    char name[50];
    char location[50];
};

struct product_info {
    int id;
    float price;
    int quantity;
};

struct category {
    int id;
    int products_num;
};

union database {
    struct shops shop;
    struct product_info product;
    struct category category;
};

int main() {
    union database data;

    printf("Size of the database union: %zu bytes\n", sizeof(data));
    printf("Size of the shops struct: %zu bytes\n", sizeof(struct shops));
    printf("Size of the product_info struct: %zu bytes\n", sizeof(struct product_info));
    printf("Size of the category struct: %zu bytes\n", sizeof(struct category));

    return 0;
}