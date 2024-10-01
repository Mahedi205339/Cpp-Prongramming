#include <iostream>
using namespace std;

class Room {
private:
    double length;
    double width;
    double height;

public:
    // Constructor with default values
    Room(double l = 12, double w = 8, double h = 10) : length(l), width(w), height(h) {}

    // Method to calculate floor area (length × width)
    double calculateFloorArea() {
        return length * width;
    }

    // Method to calculate volume (length × width × height)
    double calculateVolume() {
        return length * width * height;
    }

    // Method to display room dimensions
    void displayDimensions() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }

    // Getter methods for length, width, and height
    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
};

// Non-member function to compare two rooms by volume
Room compareRoomVolume(const Room &room1, const Room &room2) {
    if (room1.calculateVolume() > room2.calculateVolume()) {
        return room1;
    } else {
        return room2;
    }
}

int main() {
    // Room object with default dimensions
    Room room1;
    room1.displayDimensions();
    cout << "Floor Area: " << room1.calculateFloorArea() << endl;

    // Room object with user input
    double length, width, height;
    cout << "Enter room dimensions (length, width, height): ";
    cin >> length >> width >> height;
    Room room2(length, width, height);
    room2.displayDimensions();
    cout << "Floor Area: " << room2.calculateFloorArea() << endl;

    // Room object with parameters passed directly in code
    Room room3(15, 10, 12);
    room3.displayDimensions();
    cout << "Floor Area: " << room3.calculateFloorArea() << endl;

    // Object pointer pointing to an existing object
    Room *roomPtr = &room1;
    cout << "Using pointer to access room1: " << endl;
    roomPtr->displayDimensions();

    // Creating a new object using a pointer with default values
    Room *roomPtr2 = new Room();
    cout << "New Room (default values) created using pointer: " << endl;
    roomPtr2->displayDimensions();
    
    // Creating a new object using a pointer with parameterized values
    Room *roomPtr3 = new Room(20, 15, 14);
    cout << "New Room (parameterized values) created using pointer: " << endl;
    roomPtr3->displayDimensions();

    // Creating a new object using a pointer with copied values from an existing object
    Room *roomPtr4 = new Room(room2.getLength(), room2.getWidth(), room2.getHeight());
    cout << "New Room (copied values) created using pointer: " << endl;
    roomPtr4->displayDimensions();

    // Comparing volumes of room2 and room3 using a non-member function
    Room largerRoom = compareRoomVolume(room2, room3);
    cout << "The room with the larger volume has dimensions: ";
    largerRoom.displayDimensions();

    // Free dynamically allocated memory
    delete roomPtr2;
    delete roomPtr3;
    delete roomPtr4;

    return 0;
}
