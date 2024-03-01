#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX_EMPLOYEES 1000;

struct employee_t {
	int id;
	 int income;
		int staff;

};

void initialize_employee(struct employee_t *e) {
	e -> id = 0;
    e -> income = 0;
    e -> staff = false; 
	
	return;
}

int main() {
	int n = 4; 
	struct employee_t *employees = malloc(sizeof(struct employee_t) * n);  //treat employees to a pointer. 
  if(employees == NULL) {
		printf("The allocator failed\n");
		return -1; 
	}
	initialize_employee(&employees[0]);


	// have to give memory back to OS
	free(employees); 
	printf("%d\n", employees[0].income);
	employees = NULL; //avoid use after free bug/danging pointers. 

	
}
