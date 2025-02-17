#include <iostream>
#include <string>
using namespace std;
// Structure to store employee details
struct Employee {
 string Name;
 int ID_number;
 string Position;
 float Salary;
 };
// Function to input employee data
void InputEmployeeData(Employee employees[], int count) {
 for (int i = 0; i < count; i++) {
 cout << "\nEnter details for employee " << i + 1 << ":\n";
 cout << "Name : ";
 cin.ignore();
 getline(cin, employees[i].Name); 
 cout << "ID Number : ";
 cin >> employees[i].ID_number;
 cout << "Position : ";
 cin >> employees[i].Position;
 cout << "Salary : ";
 cin >> employees[i].Salary;
 }
}
// Function to display employee records
void DisplayEmployeeData(Employee employees[], int count) {
 cout << "\n****** Employee Records ******\n";
 for (int i = 0; i < count; i++) {
 cout << "ID Number : " << employees[i].ID_number << "\n";
 cout << "Name : " << employees[i].Name << "\n";
 cout << "Position : " << employees[i].Position << "\n";
 cout << "Salary : " << employees[i].Salary << "\n\n";
 }
}
// Function to find the employee with the highest marks
void FindHighestSalary(Employee employees[], int count) {
 int topIndex = 0;
 for (int i = 1; i < count; i++) {
 if (employees[i].Salary > employees[topIndex].Salary) {
 topIndex = i;
 }
 }
 cout << "\n****** Top Employees ******\n";
 cout << "Name : " << employees[topIndex].Name << "\n";
 cout << "ID Number : " << employees[topIndex].ID_number << "\n";
 cout << "Position : " << employees[topIndex].Position << "\n";
 cout << "Salary : " << employees[topIndex].Salary << "\n";
}
int main() {
 int numEmployees;
 cout << "Enter the number of employee: ";
 cin >> numEmployees;
 Employee employees[numEmployees]; // Structured array
 InputEmployeeData(employees, numEmployees);
 DisplayEmployeeData(employees, numEmployees);
 FindHighestSalary(employees, numEmployees);
 return 0;
}

