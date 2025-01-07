#include <iostream>
#include <string>
using namespace std;

int main() {
    int time, classType, numTickets;
    double totalCost = 0.0;
    string couponCode;
    const string validCoupon = "DISCOUNT20"; // predefined valid coupon code
    const double couponDiscount = 0.20;     // 20% discount for valid coupon

    cout << "Enter time of day (1 = morning, 2 = afternoon, 3 = evening): ";
    cin >> time;

    cout << "\n\nEnter class of service (1 = economic, 2 = first class): ";
    cin >> classType;

    cout << "\n\nEnter number of tickets: ";
    cin >> numTickets;

    // calculate cost based on time of day and class of service
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

    // apply 15% discount if purchasing two or more tickets
    if (numTickets >= 2) {
        totalCost *= 0.85;
    }

    // prompt for coupon code
    cout << "\n\nDo you have a coupon code? (Enter it or type 'NO' if none): ";
    cin >> couponCode;

    // apply coupon discount if valid
    if (couponCode == validCoupon) {
        cout << "\nValid coupon applied! Additional 20% discount.\n";
        totalCost *= (1 - couponDiscount);
    } else if (couponCode != "NO") {
        cout << "\nInvalid coupon code. No additional discount applied.\n";
    }

    // display total cost
    cout << "\n\nTotal cost: $" << totalCost << endl;

    return 0;
}