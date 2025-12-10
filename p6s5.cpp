 #include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flightNo;
    string source, destination;
    int seats;
    int booked;

public:
    // Input flight details
    void input() {
        cout << "Enter Flight Number: ";
        cin >> flightNo;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Total Seats: ";
        cin >> seats;

        booked = 0; // Initially no seats booked
    }

    // Display flight details
    void display() const {
        cout << "Flight No: " << flightNo
             << ", Source: " << source
             << ", Destination: " << destination
             << ", Seats: " << seats
             << ", Booked: " << booked
             << ", Available: " << seats - booked << endl;
    }

    // Check if flight matches source & destination
    bool match(string s, string d) {
        return (source == s && destination == d);
    }

    // Book a seat
    bool bookSeat() {
        if (booked < seats) {
            booked++;
            return true;
        }
        return false;
    }
};

int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    Flight f[n];

    cout << "\n--- Enter Flight Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nFlight " << i + 1 << ":\n";
        f[i].input();
    }

    string src, dest;
    cout << "\nEnter Source: ";
    cin >> src;

    cout << "Enter Destination: ";
    cin >> dest;

    cout << "\n--- Available Flights ---\n";
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (f[i].match(src, dest)) {
            found = true;
            f[i].display();

            char ch;
            cout << "Do you want to book a seat? (y/n): ";
            cin >> ch;

            if (ch == 'y' || ch == 'Y') {
                if (f[i].bookSeat())
                    cout << "Seat booked successfully!\n";
                else
                    cout << "No seats available!\n";
            }
        }
    }

    if (!found)
        cout << "No flights available for this route.\n";

    return 0;
}
