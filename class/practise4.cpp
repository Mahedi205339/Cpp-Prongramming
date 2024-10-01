#include <iostream>
#include <string>
using namespace std;

// Movie class declaration
class Movie {
private:
    string title;
    float rating;

public:
    // Constructor to initialize movie title and rating
    Movie(string t, float r) : title(t), rating(r) {}

    // Friend function declaration
    friend class StreamingPlatform;
};

// StreamingPlatform class
class StreamingPlatform {
public:
    // Friend function to display the rating of the movie
    void displayRating(const Movie& movie) {
        cout << "Movie Title: " << movie.title << endl;
        cout << "Rating: " << movie.rating << "/10" << endl;
    }
};

int main() {
    // Creating a Movie object
    Movie myMovie("Inception", 9.2);

    // Creating a StreamingPlatform object
    StreamingPlatform netflix;

    // Displaying the movie rating using the friend function
    netflix.displayRating(myMovie);

    return 0;
}
