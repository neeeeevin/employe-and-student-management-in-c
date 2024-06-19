#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
#define MAX_ID_LENGTH 10

// Employee structure
typedef struct {
    char id[MAX_ID_LENGTH];
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;
} Employee;

// Student structure
typedef struct {
    char id[MAX_ID_LENGTH];
    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
} Student;

// Global arrays to store employees and students
Employee employees[MAX_EMPLOYEES];
Student students[MAX_STUDENTS];
int numEmployees = 0;
int numStudents = 0;

// Function prototypes
void addEmployee();
void addStudent();
void displayEmployees();
void displayStudents();
void searchEmployee(char id[]);
void searchStudent(char id[]);

int main() {
    int choice;
    char id[MAX_ID_LENGTH];

    while (1) {
        printf("\n---- Management System Menu ----\n");
        printf("1. Add Employee\n");
        printf("2. Add Student\n");
        printf("3. Display All Employees\n");
        printf("4. Display All Students\n");
        printf("5. Search Employee by ID\n");
        printf("6. Search Student by ID\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        fflush(stdin); // Clear input buffer

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                displayEmployees();
                break;
            case 4:
                displayStudents();
                break;
            case 5:
                printf("Enter employee ID to search: ");
                scanf("%s", id);
                searchEmployee(id);
                break;
            case 6:
                printf("Enter student ID to search: ");
                scanf("%s", id);
                searchStudent(id);
                break;
            case 7:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a number between 1 and 7.\n");
        }
    }

    return 0;
}

// Function to add an employee
void addEmployee() {
    if (numEmployees < MAX_EMPLOYEES) {
        printf("Enter employee ID: ");
        scanf("%s", employees[numEmployees].id);
        printf("Enter employee name: ");
        scanf("%s", employees[numEmployees].name);
        printf("Enter employee age: ");
        scanf("%d", &employees[numEmployees].age);
        printf("Enter employee salary: ");
        scanf("%f", &employees[numEmployees].salary);
        
        numEmployees++;
        printf("Employee added successfully.\n");
    } else {
        printf("Maximum employees limit reached. Cannot add more.\n");
    }
}

// Function to add a student
void addStudent() {
    if (numStudents < MAX_STUDENTS) {
        printf("Enter student ID: ");
        scanf("%s", students[numStudents].id);
        printf("Enter student name: ");
        scanf("%s", students[numStudents].name);
        printf("Enter student age: ");
        scanf("%d", &students[numStudents].age);
        printf("Enter student GPA: ");
        scanf("%f", &students[numStudents].gpa);
        
        numStudents++;
        printf("Student added successfully.\n");
    } else {
        printf("Maximum students limit reached. Cannot add more.\n");
    }
}

// Function to display all employees
void displayEmployees() {
    if (numEmployees == 0) {
        printf("No employees to display.\n");
    } else {
        printf("\n--- List of Employees ---\n");
        for (int i = 0; i < numEmployees; i++) {
            printf("Employee ID: %s\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("\n");
        }
    }
}

// Function to display all students
void displayStudents() {
    if (numStudents == 0) {
        printf("No students to display.\n");
    } else {
        printf("\n--- List of Students ---\n");
        for (int i = 0; i < numStudents; i++) {
            printf("Student ID: %s\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("GPA: %.2f\n", students[i].gpa);
            printf("\n");
        }
    }
}

// Function to search for an employee by ID
void searchEmployee(char id[]) {
    int found = 0;
    for (int i = 0; i < numEmployees; i++) {
        if (strcmp(employees[i].id, id) == 0) {
            printf("Employee found:\n");
            printf("Employee ID: %s\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Salary: %.2f\n", employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %s not found.\n", id);
    }
}

// Function to search for a student by ID
void searchStudent(char id[]) {
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].id, id) == 0) {
            printf("Student found:\n");
            printf("Student ID: %s\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("GPA: %.2f\n", students[i].gpa);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %s not found.\n", id);
    }
}
