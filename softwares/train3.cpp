#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

// Train class to hold information about trains
class Train {
public:
    string destination;
    string type;
    int seats;
    double fare;

    Train(string dest, string typ, int seat, double fr)
        : destination(dest), type(typ), seats(seat), fare(fr) {}

    void displayInfo() {
        cout << "Train Type: " << type << "\n"
             << "Seats Available: " << seats << "\n"
             << "Fare: $" << fare << "\n";
    }
};

// Booking class to hold booking information
class Booking {
public:
    int bookingID;
    string destination;
    string trainType;
    double fare;
    bool confirmed;

    Booking(int id, string dest, string tType, double fr)
        : bookingID(id), destination(dest), trainType(tType), fare(fr), confirmed(false) {}

    void confirmBooking() {
        confirmed = true;
        cout << "Ticket has been booked. Your ticket number is: " << bookingID << "\n";
    }

    void displayBooking() {
        cout << "Booking ID: " << bookingID << "\n"
             << "Destination: " << destination << "\n"
             << "Train Type: " << trainType << "\n"
             << "Fare: $" << fare << "\n";
    }
};

// Function to generate a unique booking ID
int generateBookingID() {
    srand((unsigned)time(0));
    return rand() % 100000 + 1;
}

// Main function to display options and handle bookings
int main() {
    cout << "Welcome to Tramti! - Travel Smart, Travel Safe\n";
    
    vector<string> destinations = {"City A", "City B", "City C", "City D", "City E"};
    vector<Train> trains = {
        Train("City A", "AC", 50, 25.0),
        Train("City B", "Shovon Chair", 100, 15.0),
        Train("City C", "Snigdha", 75, 20.0),
        Train("City D", "Shovon", 120, 10.0)
    };

    int choice;
    cout << "1. Book a Train\n2. Cancel Booking\nSelect an option: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nAvailable Destinations:\n";
        for (size_t i = 0; i < destinations.size(); i++) {
            cout << i + 1 << ". " << destinations[i] << "\n";
        }
        int destChoice;
        cout << "Choose your destination: ";
        cin >> destChoice;

        string selectedDestination = destinations[destChoice - 1];
        cout << "\nTrain options for " << selectedDestination << ":\n";

        vector<Train> availableTrains;
        for (auto &train : trains) {
            if (train.destination == selectedDestination) {
                train.displayInfo();
                availableTrains.push_back(train);
            }
        }

        int trainChoice;
        cout << "Choose a train type: ";
        cin >> trainChoice;

        Train selectedTrain = availableTrains[trainChoice - 1];

        int bookingID = generateBookingID();
        Booking booking(bookingID, selectedDestination, selectedTrain.type, selectedTrain.fare);

        booking.displayBooking();
        char confirm;
        cout << "Confirm your ticket? (y/n): ";
        cin >> confirm;

        if (confirm == 'y' || confirm == 'Y') {
            booking.confirmBooking();
        } else {
            cout << "Booking canceled.\n";
        }

    } else if (choice == 2) {
        cout << "Canceling feature is under development.\n";
    } else {
        cout << "Invalid option selected.\n";
    }

    cout << "Thank you for using Tramti!\n";
    return 0;
}
