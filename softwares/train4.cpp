#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

// Train class to hold information about trains
class Train {
public:
    string destination;
    string type;
    string departureTime;
    string arrivalTime;
    string departureDate;
    string arrivalDate;
    int snigdhaSeats;
    int acSeats;
    int shovonChairSeats;
    int shovonSeats;
    double snigdhaFare;
    double acFare;
    double shovonChairFare;
    double shovonFare;

    Train(string dest, string typ, string depTime, string arrTime, string depDate, string arrDate,
          int snigSeats, int acSeats, int shovonChairSeats, int shovSeats,
          double snigFare, double acFare, double shovChairFare, double shovFare)
        : destination(dest), type(typ), departureTime(depTime), arrivalTime(arrTime), 
          departureDate(depDate), arrivalDate(arrDate), snigdhaSeats(snigSeats), 
          acSeats(acSeats), shovonChairSeats(shovonChairSeats), shovonSeats(shovSeats), 
          snigdhaFare(snigFare), acFare(acFare), shovonChairFare(shovChairFare), shovonFare(shovFare) {}

    void displayInfo() {
        cout << "Train Type: " << type << "\n"
             << "Destination: " << destination << "\n"
             << "Departure: " << departureTime << " on " << departureDate << "\n"
             << "Arrival: " << arrivalTime << " on " << arrivalDate << "\n"
             << "Seat Availability and Fare:\n"
             << "  Snigdha - Seats: " << snigdhaSeats << ", Fare: $" << snigdhaFare << "\n"
             << "  AC - Seats: " << acSeats << ", Fare: $" << acFare << "\n"
             << "  Shovon Chair - Seats: " << shovonChairSeats << ", Fare: $" << shovonChairFare << "\n"
             << "  Shovon - Seats: " << shovonSeats << ", Fare: $" << shovonFare << "\n";
    }
};

// Booking class to hold booking information
class Booking {
public:
    int bookingID;
    string destination;
    string trainType;
    string coachType;
    double fare;
    bool confirmed;

    Booking(int id, string dest, string tType, string cType, double fr)
        : bookingID(id), destination(dest), trainType(tType), coachType(cType), fare(fr), confirmed(false) {}

    void confirmBooking() {
        confirmed = true;
        cout << "Ticket has been booked. Your ticket number is: " << bookingID << "\n";
    }

    void displayBooking() {
        cout << "Booking ID: " << bookingID << "\n"
             << "Destination: " << destination << "\n"
             << "Train Type: " << trainType << "\n"
             << "Coach Type: " << coachType << "\n"
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
        Train("City A", "Express", "10:00 AM", "2:00 PM", "12-11-2024", "12-11-2024", 20, 15, 30, 40, 35.0, 50.0, 25.0, 15.0),
        Train("City B", "Superfast", "8:00 AM", "12:00 PM", "12-11-2024", "12-11-2024", 18, 12, 28, 35, 30.0, 45.0, 22.0, 12.0),
        Train("City C", "Intercity", "9:30 AM", "1:30 PM", "12-11-2024", "12-11-2024", 22, 17, 33, 45, 32.0, 48.0, 24.0, 14.0)
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
        cout << "Choose a train type (1-" << availableTrains.size() << "): ";
        cin >> trainChoice;

        Train selectedTrain = availableTrains[trainChoice - 1];

        cout << "\nSelect Coach Type:\n1. Snigdha\n2. AC\n3. Shovon Chair\n4. Shovon\n";
        int coachChoice;
        cin >> coachChoice;

        string coachType;
        double fare;
        switch (coachChoice) {
            case 1: coachType = "Snigdha"; fare = selectedTrain.snigdhaFare; break;
            case 2: coachType = "AC"; fare = selectedTrain.acFare; break;
            case 3: coachType = "Shovon Chair"; fare = selectedTrain.shovonChairFare; break;
            case 4: coachType = "Shovon"; fare = selectedTrain.shovonFare; break;
            default: cout << "Invalid coach type.\n"; return 1;
        }

        int bookingID = generateBookingID();
        Booking booking(bookingID, selectedDestination, selectedTrain.type, coachType, fare);

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
