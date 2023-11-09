#include <stdio.h>

struct test {
    int id;
    char name[50];
    char class_id;
};

int main() {
    struct test data;

    printf("Size of struct (int, string, char): %zu bytes\n", sizeof(data));

    struct test data_reversed;

    printf("Size of struct (string, int, char): %zu bytes\n", sizeof(data_reversed));

    return 0;
}
/**
The order of definition of the string member does not affect the overall size of the struct. 
The size is determined by the size of each individual member and their alignment requirements, 
not the order in which they are defined within the struct.
    **/
