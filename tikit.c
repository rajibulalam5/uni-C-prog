#include <iostream>
using namespace std;

int main() {
    int time, classType, numTickets;
    double totalCost = 0.0;

    // Ask user for input
    cout << "Enter time of day (1 = morning, 2 = afternoon, 3 = evening): ";
    cin >> time;

    cout << "\n\nEnter class of service (1 = economic, 2 = first class): ";
    cin >> classType;

    cout << "\n\nEnter number of tickets: ";
    cin >> numTickets;

    // Calculate cost based on time of day and class of service
    if (time == 1) { // morning
        if (classType == 1) { // economic
            totalCost = numTickets * 100.0;
        } else if (classType == 2) { // first class
            totalCost = numTickets * 150.0;
        }
    } else if (time == 2) { // afternoon
        if (classType == 1) { // economic
            totalCost = numTickets * 90.0;
        } else if (classType == 2) { // first class
            totalCost = numTickets * 140.0;
        }
    } else if (time == 3) { // evening
        if (classType == 1) { // economic
            totalCost = numTickets * 70.0;
        } else if (classType == 2) { // first class
            totalCost = numTickets * 120.0;
        }
    }

    // Apply 15% discount if purchasing two or more tickets
    if (numTickets >= 2) {
        totalCost *= 0.85;
    }

    // Display total cost
    cout << "Total cost: $" << totalCost << endl;

    return 0;
}
