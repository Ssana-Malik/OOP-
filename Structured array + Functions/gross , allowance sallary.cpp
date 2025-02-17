#include <iostream>
using namespace std;
// Function to calculate gross salary
double calculateGrossSalary(double basicSalary, double allowancePercentage) {
    double allowance = (basicSalary / 100) * allowancePercentage;
    return basicSalary + allowance;
}

// Function to calculate net salary
double calculateNetSalary(double grossSalary, double deductionPercentage) {
    double deduction = (grossSalary / 100) * deductionPercentage;
    return grossSalary - deduction;
}

int main() {
    double basicSalary, allowancePercentage, deductionPercentage;

    // Input basic salary
    cout << "Enter basic salary: ";
    cin >> basicSalary;

    // Input allowance percentage
    cout << "Enter allowance percentage (%): ";
    cin >> allowancePercentage;

    // Input deduction percentage
    cout << "Enter deduction percentage (%): ";
    cin >> deductionPercentage;

    // Calculate gross salary
    double grossSalary = calculateGrossSalary(basicSalary, allowancePercentage);

    // Calculate net salary
    double netSalary = calculateNetSalary(grossSalary, deductionPercentage);

    // Display net salary
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
