#include <iostream>
#include <string>
using namespace std;

class Address; // Forward declaration

class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize attributes
    Person(const string& name, int age) : name(name), age(age) {}

    // Declare displayDetails as a friend function
    friend void displayDetails(const Person& person, const Address& address);
};

class Address {
private:
    string street;
    string city;
    string postalCode;

public:
    // Constructor to initialize attributes
    Address(const string& street, const string& city, const string& postalCode)
        : street(street), city(city), postalCode(postalCode) {}

    // Declare displayDetails as a friend function
    friend void displayDetails(const Person& person, const Address& address);
};

// Friend function to display the details of a Person and their Address
void displayDetails(const Person& person, const Address& address) {
    cout << "Person Details:\n";
    cout << "Name: " << person.name << "\n";
    cout << "Age: " << person.age << "\n";
    cout << "Address Details:\n";
    cout << "Street: " << address.street << "\n";
    cout << "City: " << address.city << "\n";
    cout << "Postal Code: " << address.postalCode << "\n";
}

int main() {
    // Creating a Person object
    Person person("John Doe", 30);

    // Creating an Address object
    Address address("123 Main St", "Springfield", "12345");

    // Displaying details
    displayDetails(person, address);

    return 0;
}
