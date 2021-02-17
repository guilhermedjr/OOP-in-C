#include "person.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

// private data
struct person_private
{
    char* name;
    int age;
};

// manual class destructor
void dispose_person()
{
    free(__actual_person->data->name);
    free(__actual_person->data);
    free(__actual_person);

     puts("Person object sucessfuly freed!\nBye");
}

// prints
void print_person()
{
    printf("%s -: %d\n", __actual_person->data->name,
        __actual_person->data->age);
}

person* new_person(const char* name, int age)
{
    //Allocate the object
    person* new = (person*)malloc(sizeof(person));
    new->data = (person_private*)malloc(sizeof(person_private));

    //Initialize the data
    new->data->name = (char*)malloc(strlen(name) * sizeof(char) + 1);
}


