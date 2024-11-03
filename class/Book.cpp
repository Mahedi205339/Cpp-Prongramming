/* 
1. Create a class BookAccount that represents a library book account. The class should have the
following attributes and methods:
Attributes:
○ bookID (public): A string representing the unique identifier for the book.
○ borrowerName (public): A string representing the name of the borrower.
○ fine (private): A double representing the fine for overdue days.
Constructor:
○ A constructor that initializes bookID, borrowerName, and calculates the fine based on
the number of overdue days. The fine is calculated as $0.50 per day.
Destructor:
○ A destructor that displays a message when the account is closed and prints the attributes
of the account.
Methods:
○ A method calculateFine(int overdueDays) that calculates the fine based on the
number of overdue days and sets the fine attribute.
○ A helper method calculateOverdueDays(int borrowDate, int currentDate)
that calculates the number of overdue days based on the borrow date and current date,
represented as integers in the format YYYYMMDD. You will need to use this function to get
the overdue days.

N.B. [ Use the helper function calculateOverdueDays(int borrowDate, int currentDate) to
calculate overdue days, don't pass the days directly to calculateFine() function. You can take the date in
integer format like (YYYYMMDD) or whichever format you prefer. But focus on the logic in this method.]

 */

#include <iostream>
#include <string>
#include <cmath> // For absolute value calculations
using namespace std;

class BookAccount {
public:
    string bookID;          // Unique identifier for the book
    string borrowerName;     // Name of the borrower

private:
    double fine;             // Fine for overdue days (private attribute)

public:
    // Constructor that initializes bookID, borrowerName, and calculates fine based on overdue days
    BookAccount(const string& bookID, const string& borrowerName, int borrowDate, int currentDate)
        : bookID(bookID), borrowerName(borrowerName), fine(0.0) {
        int overdueDays = calculateOverdueDays(borrowDate, currentDate);
        calculateFine(overdueDays);
    }

    // Destructor that displays a message when the account is closed and prints attributes of the account
    ~BookAccount() {
        cout << "Closing Book Account:\n";
        cout << "Book ID: " << bookID << "\n";
        cout << "Borrower Name: " << borrowerName << "\n";
        cout << "Fine: $" << fine << "\n";
    }

    // Method to calculate the fine based on overdue days
    void calculateFine(int overdueDays) {
        fine = overdueDays * 0.50; // Fine is $0.50 per overdue day
    }

    // Helper method to calculate overdue days based on borrowDate and currentDate in YYYYMMDD format
    int calculateOverdueDays(int borrowDate, int currentDate) {
        int borrowYear = borrowDate / 10000;
        int borrowMonth = (borrowDate / 100) % 100;
        int borrowDay = borrowDate % 100;

        int currentYear = currentDate / 10000;
        int currentMonth = (currentDate / 100) % 100;
        int currentDay = currentDate % 100;

        // Convert the dates to "days since epoch" format to calculate the difference.
        // For simplicity, ignoring leap years and assuming 30 days per month.
        int daysBorrowed = (borrowYear * 365) + (borrowMonth * 30) + borrowDay;
        int daysCurrent = (currentYear * 365) + (currentMonth * 30) + currentDay;

        int overdueDays = max(0, daysCurrent - daysBorrowed); // No negative overdue days
        return overdueDays;
    }

    // Method to display the account details, including fine
    void displayAccountDetails() const {
        cout << "Book ID: " << bookID << "\n";
        cout << "Borrower Name: " << borrowerName << "\n";
        cout << "Fine: $" << fine << "\n";
    }
};

int main() {
    // Example usage
    int borrowDate = 20231001;   // Borrow date in YYYYMMDD format
    int currentDate = 20231103;  // Current date in YYYYMMDD format

    // Creating a BookAccount object
    BookAccount account("B123", "Alice Smith", borrowDate, currentDate);

    // Display account details
    account.displayAccountDetails();

    return 0;
}
