#include <stdio.h>
#include <stdbool.h>

struct employee_t {
    int id;
    int income;
    int staff;

};

void initialize_employee(struct employee_t *e) {
    e->id = 0;
    e->income = 0;
    e->staff = false; 

    return; 
}

int main() {

    struct employee_t Ralph; 
    //setting the default values for ralph &Raph is is location on the stack. 
   initialize_employee(&Ralph);
    printf("%d\n", Ralph.income);

    // deref and getting value
    int x = 3; 
	int *pX = &x;
	printf("%d\n", *pX); 
    printf("%p\n", pX);
}