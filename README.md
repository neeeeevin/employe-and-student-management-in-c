# employe-and-student-management-in-c
allows you to manage both employees and students. In this example, we'll create structures for Employee and Student, and provide basic functionalities such as adding, displaying, and searching for records.


Explanation:
Structures:

Employee: Stores information about an employee including ID, name, age, and salary.
Student: Stores information about a student including ID, name, age, and GPA.
Global Arrays:

employees: Array to store Employee structures.
students: Array to store Student structures.
numEmployees: Variable to keep track of the number of employees stored.
numStudents: Variable to keep track of the number of students stored.
Menu Driven Program:

The main function displays a menu of options using printf and scanf for user input.
Depending on the user's choice, it calls corresponding functions (addEmployee, addStudent, displayEmployees, displayStudents, searchEmployee, searchStudent, or exit).
Functions:

addEmployee: Allows the user to add a new employee to the employees array.
addStudent: Allows the user to add a new student to the students array.
displayEmployees: Displays all employees currently stored in the employees array.
displayStudents: Displays all students currently stored in the students array.
searchEmployee: Searches for an employee by ID and displays their details if found.
searchStudent: Searches for a student by ID and displays their details if found.
Constants:

MAX_EMPLOYEES, MAX_STUDENTS: Maximum number of employees and students that can be stored (adjustable as needed).
MAX_NAME_LENGTH, MAX_ID_LENGTH: Maximum lengths for employee/student names and IDs (adjustable as needed).
