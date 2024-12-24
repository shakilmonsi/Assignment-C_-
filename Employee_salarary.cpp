// Design a class named Book with the following private attributes:
// • title (string): Represents the title of the book.
// • author (string): Represents the author of the book.
// • ISBN (string): Represents the ISBN number of the book.
// • price (double): Represents the price of the book.

// Write a constructor that initializes these attributes. Create a method named
// applyDiscount() that reduces the price by a given percentage. Add a public method
// displayBookInfo() that displays the book's information, including the discounted price
// if any.

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;         // Name of the employee
    string employeeID;   // Employee ID
    string department;   // Department of the employee
    double basicSalary;  // Basic salary of the employee

public:
    // Constructor to initialize attributes
    Employee(string empName, string empID, string dept, double salary) {
        name = empName;
        employeeID = empID;
        department = dept;
        basicSalary = salary;
    }

    // Method to calculate gross salary
    double calculateGrossSalary() {
        const double bonusRate = 0.20; // Fixed bonus rate (20%)
        return basicSalary + (basicSalary * bonusRate);
    }

    // Method to display employee details
    void displayDetails() {
        double grossSalary = calculateGrossSalary();
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp("John Doe", "E12345", "IT", 50000.0);

    // Display employee details
    emp.displayDetails();

    return 0;
}
