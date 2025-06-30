#include <stdio.h>

// Define a structure for employee
struct Employee {
    char name[50];
    float salary;
    char address[100];
};

int main() {
    struct Employee emp;

    // Read employee details
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0'; // Remove newline character

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    getchar(); // Consume the newline character left by scanf

    printf("Enter employee address: ");
    fgets(emp.address, sizeof(emp.address), stdin);
    emp.address[strcspn(emp.address, "\n")] = '\0'; // Remove newline character

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Address: %s\n", emp.address);

    return 0;
}
