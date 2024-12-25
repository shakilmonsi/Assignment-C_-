// Design a class named Car with the following private attributes:
// • make (string): Represents the manufacturer of the car.
// • model (string): Represents the model of the car.
// • year (int): Represents the manufacturing year of the car.
// • mileage (double): Represents the mileage of the car in miles per gallon (MPG).
// Write a constructor that initializes these attributes. Create a method named age() that
// calculates and returns the current age of the car. Add a public method displayCarInfo()
// that displays the car's details, including its age and mileage.

// git add .
// git commit -m "Your commit message"
// git push -u origin main

#include <iostream>
#include <string>
#include <ctime> // For getting the current year

class Car {
private:
    std::string make;     // Manufacturer of the car
    std::string model;    // Model of the car
    int year;             // Manufacturing year
    double mileage;       // Mileage in miles per gallon (MPG)

public:
    // Constructor to initialize the car attributes
    Car(const std::string& carMake, const std::string& carModel, int carYear, double carMileage)
        : make(carMake), model(carModel), year(carYear), mileage(carMileage) {}

    // Method to calculate and return the age of the car
    int age() const {
        // Get the current year
        time_t t = time(nullptr);
        tm* currentTime = localtime(&t);
        int currentYear = 1900 + currentTime->tm_year;

        return currentYear - year;
    }

    // Method to display car information
    void displayCarInfo() const {
        std::cout << "Car Information:" << std::endl;
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Mileage: " << mileage << " MPG" << std::endl;
        std::cout << "Age: " << age() << " years" << std::endl;
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Camry", 2015, 30.5);

    // Display car information
    myCar.displayCarInfo();

    return 0;
}

