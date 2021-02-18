#include<stdio.h>
#include<stdlib.h>
#include "person.h"

int main(void) {

    // instantiates 3 persons
    person* person1 = new_person("Guilherme", 17);
    person* person2 = new_person("Celso Portiolli", 53);
    person* person3 = new_person("Luiz Inácio Lula da Silva", 75);

    _(person1)->print();
    _(person2)->print();
    _(person3)->print();

    _(person1)->dispose();
    _(person2)->dispose();
    _(person3)->dispose();
    
    system("pause");
    return(0);
}