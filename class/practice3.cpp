#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    string bookTitle;
    string borrowerName;
    int borrowDays;

public:
    // Constructor
    LibraryBook(string title = "", string borrower = "", int days = 0) {
        bookTitle = title;
        borrowerName = borrower;
        borrowDays = days;
    }

    // Function to take input for book details
    void setBookDetails(string title, string borrower, int days) {
        bookTitle = title;
        borrowerName = borrower;
        borrowDays = days;
    }

    // Function to get the number of days the book is borrowed
    int getBorrowDays() const {
        return borrowDays;
    }

    // Function to get the borrower name
    string getBorrowerName() const {
        return borrowerName;
    }

    // Function to display the book details
    void displayBookDetails() const {
        cout << "Book Title: " << bookTitle << ", Borrower: " << borrowerName << ", Borrowed for: " << borrowDays << " days" << endl;
    }
};

// Function to input details for an array of LibraryBook objects
void inputBookDetails(LibraryBook books[], int size) {
    for (int i = 0; i < size; ++i) {
        string title, borrower;
        int days;
        cout << "Enter details for book " << i + 1 << ": " << endl;
        cout << "Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Borrower Name: ";
        getline(cin, borrower);
        cout << "Days Borrowed: ";
        cin >> days;

        books[i].setBookDetails(title, borrower, days);
    }
}

// Function to display books borrowed for more than a specific number of days
void displayBooksMoreThan(LibraryBook books[], int size, int days) {
    cout << "Books borrowed for more than " << days << " days:" << endl;
    for (int i = 0; i < size; ++i) {
        if (books[i].getBorrowDays() > days) {
            books[i].displayBookDetails();
        }
    }
}

// Function to display total number of books borrowed by a specific borrower
int totalBooksByBorrower(LibraryBook books[], int size, const string &borrower) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (books[i].getBorrowerName() == borrower) {
            count++;
        }
    }
    return count;
}

int main() {
    // Creating an array of 20 LibraryBook objects
    const int SIZE = 20;
    LibraryBook books[SIZE];

    // Taking input for each book
    cout << "Input details for the array of 20 books:\n";
    inputBookDetails(books, SIZE);

    // Displaying books borrowed for more than 30 days
    displayBooksMoreThan(books, SIZE, 30);

    // Displaying the total number of books borrowed by a specific borrower
    string borrower;
    cout << "\nEnter the name of the borrower to find the total books borrowed: ";
    cin.ignore();
    getline(cin, borrower);
    int total = totalBooksByBorrower(books, SIZE, borrower);
    cout << borrower << " has borrowed " << total << " books.\n";

    // Creating a 2x2 2D array of LibraryBook objects and setting attributes
    LibraryBook twoDArray[2][2];
    cout << "\nSetting details for the 2D array of 2x2 books:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            string title, borrower;
            int days;
            cout << "Enter details for book [" << i + 1 << "][" << j + 1 << "]:\n";
            cout << "Book Title: ";
            getline(cin, title);
            cout << "Borrower Name: ";
            getline(cin, borrower);
            cout << "Days Borrowed: ";
            cin >> days;
            cin.ignore();  // Clear the input buffer

            twoDArray[i][j].setBookDetails(title, borrower, days);
        }
    }

    // Displaying the details of books in the 2D array
    cout << "\nDisplaying details for the 2D array of books:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            twoDArray[i][j].displayBookDetails();
        }
    }

    return 0;
}
