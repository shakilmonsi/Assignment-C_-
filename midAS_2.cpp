
// Design a class named Employee with the following private attributes:
// • name (string): Represents the name of the employee.
// • employeeID (string): Represents the employee's ID.
// • department (string): Represents the department in which the employee
// works.
// • basicSalary (double): Represents the basic salary of the employee.
// Write a constructor that initializes these attributes. Create a method named
// calculateGrossSalary() that calculates and returns the gross salary by adding a fixed
// bonus of 20% of the basic salary. Add a public method displayDetails() that displays the
// employee's details, including the gross salary.

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;    // Title of the book
    string author;   // Author of the book
    string ISBN;     // ISBN number of the book
    double price;    // Price of the book

public:
    // Constructor to initialize attributes
    Book(string bookTitle, string bookAuthor, string bookISBN, double bookPrice) {
        title = bookTitle;
        author = bookAuthor;
        ISBN = bookISBN;
        price = bookPrice;
    }

    // Method to apply a discount to the price
    void applyDiscount(double percentage) {
        if (percentage > 0 && percentage <= 100) {
            price -= (price * (percentage / 100));
        } else {
            cout << "Invalid discount percentage!" << endl;
        }
    }

    // Method to display book information
    void displayBookInfo() {
        cout << "Book Information:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Create a Book object
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565", 15.99);

    // Display book information
    myBook.displayBookInfo();

    // Apply a discount and display updated information
    cout << "\nApplying a 10% discount..." << endl;
    myBook.applyDiscount(10);
    myBook.displayBookInfo();

    return 0;
}
