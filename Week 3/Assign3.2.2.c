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

struct database {
    struct shops shop;
    struct product_info product;
    struct category category;
};

int main() {
    struct database data;

    printf("Size of the database struct: %zu bytes\n", sizeof(data));
    printf("Size of the shops struct: %zu bytes\n", sizeof(struct shops));
    printf("Size of the product_info struct: %zu bytes\n", sizeof(struct product_info));
    printf("Size of the category struct: %zu bytes\n", sizeof(struct category));

    return 0;
}
/**
The size of the `database` struct is larger than the size of the previous union
because  all members share the same memory space (union). 
The size of the union is determined by the largest member. 
In this case, the size of the union would be equal to the size of the largest structure,
which is `category` with its two `int` members.
but in a struct, each member has its own separate memory space.
The size of the struct is the sum of the sizes of all its members. 
Therefore, the size of the `database` struct in this example would be the sum of the sizes of `shops`,
`product_info`, and `category` structures.
**/

