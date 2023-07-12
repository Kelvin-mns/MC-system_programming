#include <stdio.h>

struct Person{
    char *name;
    int age;
};

typedef struct Item{
    char *name;
    double price;
    float expire; 
} Item;

int main()
{ 
    struct Person per;
    per.name = "john";
    per.age = 30;

    struct Person per_2 = {"Mercy", 20};
    struct Person per_3 = {.age = 30, .name = "kelvin"};

    Item laptop = {"lennvo", 3500.5, 2023.5};

    printf("Item name is %s and price is %.2f expiring on %.3f\n", laptop.name, laptop.price, laptop.expire);
    printf("My name is %s and am %d years old \n", per.name, per.age);
    printf("My name is %s and am %d years old \n", per_2.name, per_2.age);
    printf("My name is %s and am %d years old \n", per_3.name, per_3.age);
    return 0;
}