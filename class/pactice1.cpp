#include <iostream>
#include <cmath> // for abs()

using namespace std;

class BookAccount {
public:
    string bookID;
    string borrowerName;

    // Constructor
    BookAccount(string bID, string bName, int borrowDate, int currentDate) {
        bookID = bID;
        borrowerName = bName;
        fine = 0.0;
        int overdueDays = calculateOverdueDays(borrowDate, currentDate);
        calculateFine(overdueDays);
    }

    // Destructor
    ~BookAccount() {
        cout << "Account closed for: " << borrowerName << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Fine: $" << fine << endl;
    }

    // Method to calculate the fine based on overdue days
    void calculateFine(int overdueDays) {
        fine = overdueDays * 0.50; // Fine is $0.50 per day
    }

    // Helper method to calculate overdue days based on borrow and current date
    int calculateOverdueDays(int borrowDate, int currentDate) {
        // Convert the dates to YYYYMMDD format for easy comparison
        // Assume both borrowDate and currentDate are in the format YYYYMMDD

        // Break down the borrow and current dates into year, month, and day
        int borrowYear = borrowDate / 10000;
        int borrowMonth = (borrowDate / 100) % 100;
        int borrowDay = borrowDate % 100;

        int currentYear = currentDate / 10000;
        int currentMonth = (currentDate / 100) % 100;
        int currentDay = currentDate % 100;

        // Convert everything to days
        int totalBorrowDays = borrowYear * 365 + borrowMonth * 30 + borrowDay;
        int totalCurrentDays = currentYear * 365 + currentMonth * 30 + currentDay;

        // Overdue days
        int overdueDays = totalCurrentDays - totalBorrowDays;

        // If overdueDays is negative, it means the book is not overdue
        return overdueDays > 0 ? overdueDays : 0;
    }

private:
    double fine; // Private fine attribute
};

int main() {
    // Example usage
    BookAccount account("B123", "John Doe", 20230901, 20231001); // borrowDate = 2023-09-01, currentDate = 2023-10-01
    return 0;
}
