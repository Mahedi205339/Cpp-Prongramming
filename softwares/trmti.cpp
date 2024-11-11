#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

// Train class with destination, type, departure/arrival times, and coach fares
class Train {
public:
    string destination;
    string type;
    string departureTime;
    string arrivalTime;
    double snigdhaFare;
    double acFare;
    double shovonChairFare;
    double shovonFare;

    Train(string dest, string typ, string depTime, string arrTime,
          double snigFare, double acFr, double shovonChFr, double shovonFr)
        : destination(dest), type(typ), departureTime(depTime), arrivalTime(arrTime),
          snigdhaFare(snigFare), acFare(acFr), shovonChairFare(shovonChFr), shovonFare(shovonFr) {}

    void displayInfo() {
        cout << "Train Type: " << type << "\n"
             << "Destination: " << destination << "\n"
             << "Departure: " << departureTime << "\n"
             << "Arrival: " << arrivalTime << "\n"
             << "Fare Options:\n"
             << "  Snigdha: $" << snigdhaFare << "\n"
             << "  AC: $" << acFare << "\n"
             << "  Shovon Chair: $" << shovonChairFare << "\n"
             << "  Shovon: $" << shovonFare << "\n";
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

// Main function for booking process
int main() {
    cout << "Welcome to Tramti! - Travel Smart, Travel Safe\n";
    
    vector<string> destinations = {"Dhaka", "Chittagong", "Rajshahi", "Rangpur", "Khulna", "Sylhet"};
    vector<Train> trains = {
        Train("Dhaka", "Express", "10:00 AM", "2:00 PM", 50.0, 40.0, 30.0, 20.0),
        Train("Chittagong", "Superfast", "8:00 AM", "12:00 PM", 48.0, 38.0, 28.0, 18.0),
        Train("Rajshahi", "Intercity", "9:30 AM", "1:30 PM", 52.0, 42.0, 32.0, 22.0),
        Train("Rangpur", "Mail", "7:00 AM", "11:00 AM", 47.0, 37.0, 27.0, 17.0),
        Train("Khulna", "Local", "5:00 PM", "9:00 PM", 45.0, 35.0, 25.0, 15.0),
        Train("Sylhet", "Express", "6:00 AM", "10:00 AM", 53.0, 43.0, 33.0, 23.0)
    };

    cout << "1. Book a Train\n2. Cancel Booking\nSelect an option: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "\nAvailable Destinations:\n";
        for (size_t i = 0; i < destinations.size(); i++) {
            cout << i + 1 << ". " << destinations[i] << "\n";
        }
        
        int destChoice;
        cout << "Choose your destination (1-" << destinations.size() << "): ";
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
