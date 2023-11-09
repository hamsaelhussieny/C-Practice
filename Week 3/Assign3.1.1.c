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