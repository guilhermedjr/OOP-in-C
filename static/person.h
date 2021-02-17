#define PERSON_H_

// incomplete type declaration
typedef struct person_private person_private;

typedef struct person
{
    //"private" data
    person_private* data;

    // "class" functions
    void (*dispose);
    void(*print)();
} person;

// instatiate a new person
person* new_person(const char*, int);

// pointer to the actual person in the context
person* __actual_person;

// sets the actual person (not thread safe)
person* _(person* obj);
