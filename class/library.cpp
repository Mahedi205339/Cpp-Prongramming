
/* 
Create a class LibraryBook with private attributes bookTitle, borrowerName, and borrowDays.
● Create an array of 20 LibraryBook objects.
● Write a function to take input details (from user) for each book (book title, borrower name, and
days borrowed).
● Take a 2D array of 2X2 dimension and try setting the attributes and displaying the outputs.
● Implement a function to display books borrowed for more than a specific number of days (e.g.,
more than 30 days).
● Write another function to display the total number of books borrowed by a specific borrower.

 */

#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    string bookTitle;
    string borrowerName;
    int borrowDays;

public:
    // Default constructor
    LibraryBook() : bookTitle(""), borrowerName(""), borrowDays(0) {}

    // Parameterized constructor
    LibraryBook(const string& title, const string& borrower, int days)
        : bookTitle(title), borrowerName(borrower), borrowDays(days) {}

    // Set the details of the book
    void setDetails(const string& title, const string& borrower, int days) {
        bookTitle = title;
        borrowerName = borrower;
        borrowDays = days;
    }

    // Get the borrow days for checking
    int getBorrowDays() const {
        return borrowDays;
    }

    // Get the borrower name
    string getBorrowerName() const {
        return borrowerName;
    }

    // Display details of the book
    void displayDetails() const {
        cout << "Book Title: " << bookTitle << "\n";
        cout << "Borrower Name: " << borrowerName << "\n";
        cout << "Borrow Days: " << borrowDays << "\n";
    }
};

// Function to take input for each book in an array of LibraryBook objects
void inputLibraryBooks(LibraryBook books[], int size) {
    for (int i = 0; i < size; ++i) {
        string title, borrower;
        int days;

        cout << "Enter details for book " << i + 1 << ":\n";
        cout << "Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Borrower Name: ";
        getline(cin, borrower);
        cout << "Borrow Days: ";
        cin >> days;

        books[i].setDetails(title, borrower, days);
    }
}

// Function to display books borrowed for more than a specific number of days
void displayBooksOverDays(LibraryBook books[], int size, int daysLimit) {
    cout << "\nBooks borrowed for more than " << daysLimit << " days:\n";
    for (int i = 0; i < size; ++i) {
        if (books[i].getBorrowDays() > daysLimit) {
            books[i].displayDetails();
            cout << "--------------------------\n";
        }
    }
}

// Function to display the total number of books borrowed by a specific borrower
void displayTotalBooksByBorrower(LibraryBook books[], int size, const string& borrower) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (books[i].getBorrowerName() == borrower) {
            ++count;
        }
    }
    cout << "\nTotal books borrowed by " << borrower << ": " << count << "\n";
}

int main() {
    const int numBooks = 20;
    LibraryBook books[numBooks];

    // Input details for each book
    inputLibraryBooks(books, numBooks);

    // 2D array of LibraryBook objects (2x2)
    LibraryBook bookArray2D[2][2];
    bookArray2D[0][0].setDetails("The Great Gatsby", "Alice", 10);
    bookArray2D[0][1].setDetails("Moby Dick", "Bob", 35);
    bookArray2D[1][0].setDetails("Hamlet", "Alice", 15);
    bookArray2D[1][1].setDetails("1984", "Charlie", 40);

    // Display details of books in 2D array
    cout << "\nDetails of books in 2D array:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Book at [" << i << "][" << j << "]\n";
            bookArray2D[i][j].displayDetails();
            cout << "--------------------------\n";
        }
    }

    // Display books borrowed for more than a specific number of days (e.g., 30 days)
    displayBooksOverDays(books, numBooks, 30);

    // Display the total number of books borrowed by a specific borrower (e.g., "Alice")
    string borrowerToCheck;
    cout << "\nEnter the borrower name to check the total borrowed books: ";
    cin.ignore();
    getline(cin, borrowerToCheck);
    displayTotalBooksByBorrower(books, numBooks, borrowerToCheck);

    return 0;
}
