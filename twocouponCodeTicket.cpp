#include <iostream>
#include <string>
using namespace std;

int main() {
    int time, classType, numTickets;
    double totalCost = 0.0;
    string couponCode;
    const string coupon10 = "PUCCSE_50";   // 10% discount coupon
    const string coupon15 = "PUCCSE_100"; // 15% discount coupon
    double couponDiscount = 0.0;          // default no discount

    cout << "enter time of day (1 = morning, 2 = afternoon, 3 = evening): ";
    cin >> time;

    cout << "\n\nenter class of service (1 = economic, 2 = first class): ";
    cin >> classType;

    cout << "\n\nenter number of tickets: ";
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
    cout << "\n\ndo you have a coupon code? (enter it or type 'NO' if none): ";
    cin >> couponCode;

    // validate and apply coupon discount
    if (couponCode == coupon10) {
        cout << "\nvalid coupon applied! additional 10% discount.\n";
        couponDiscount = 0.10;
    } else if (couponCode == coupon15) {
        cout << "\nvalid coupon applied! additional 15% discount.\n";
        couponDiscount = 0.15;
    } else if (couponCode != "NO") {
        cout << "\ninvalid coupon code. no additional discount applied.\n";
    }

    // apply coupon discount to total cost
    totalCost *= (1 - couponDiscount);

    // display total cost
    cout << "\n\ntotal cost: $" << totalCost << endl;

    return 0;
}