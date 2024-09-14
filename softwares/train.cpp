#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a structure to represent a Train
struct Train {
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string departureTime;
    string arrivalTime;
};

// Function to display the details of a single train
void displayTrain(const Train &train) {
    cout << "Train Number: " << train.trainNumber << endl;
    cout << "Train Name: " << train.trainName << endl;
    cout << "Source: " << train.source << endl;
    cout << "Destination: " << train.destination << endl;
    cout << "Departure Time: " << train.departureTime << endl;
    cout << "Arrival Time: " << train.arrivalTime << endl;
    cout << "-------------------------------" << endl;
}

// Function to add a new train to the list
void addTrain(vector<Train> &trainList) {
    Train newTrain;
    
    cout << "Enter Train Number: ";
    cin >> newTrain.trainNumber;
    cin.ignore(); // To handle newline character

    cout << "Enter Train Name: ";
    getline(cin, newTrain.trainName);

    cout << "Enter Source Station: ";
    getline(cin, newTrain.source);

    cout << "Enter Destination Station: ";
    getline(cin, newTrain.destination);

    cout << "Enter Departure Time: ";
    getline(cin, newTrain.departureTime);

    cout << "Enter Arrival Time: ";
    getline(cin, newTrain.arrivalTime);

    trainList.push_back(newTrain);
    cout << "Train added successfully!\n";
}

// Function to view all trains in the schedule
void viewTrains(const vector<Train> &trainList) {
    if (trainList.empty()) {
        cout << "No trains available.\n";
    } else {
        for (const Train &train : trainList) {
            displayTrain(train);
        }
    }
}

// Function to search for a train by its number
void searchTrainByNumber(const vector<Train> &trainList) {
    int searchNumber;
    cout << "Enter Train Number to search: ";
    cin >> searchNumber;

    bool found = false;
    for (const Train &train : trainList) {
        if (train.trainNumber == searchNumber) {
            displayTrain(train);
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Train not found.\n";
    }
}

// Menu function to display options to the user
void displayMenu() {
    cout << "\n--- Train Schedule Management ---\n";
    cout << "1. View All Trains\n";
    cout << "2. Add a Train\n";
    cout << "3. Search Train by Number\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    vector<Train> trainList; // To store the list of trains
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                viewTrains(trainList);
                break;
            case 2:
                addTrain(trainList);
                break;
            case 3:
                searchTrainByNumber(trainList);
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
