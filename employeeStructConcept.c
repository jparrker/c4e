#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000; 

struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income; 
    bool ismanager; 

};

int main() {
    struct employee_t employees[1000];
    int i = 0;
    for(i = 0; i < 1000; i++) {
        employees[i].income = 42.0; 
        employees[i].ismanager = false; 
    }
    printf("%f\n", employees[10].income);
}