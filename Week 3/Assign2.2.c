#include <stdio.h>

struct info {
    char name[50];
    int age;
};

int main() {
    struct info person;  
    struct info *ptr;   

    ptr = &person;       

    printf("Enter the name: ");
    scanf("%s", ptr->name);

    printf("Enter the age: ");
    scanf("%d", &(ptr->age));

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    return 0;
}