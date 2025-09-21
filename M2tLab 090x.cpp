// CSC 134
// M2t1 - product sales
// Colby Watts
//9/20/25
// we're going to make the simple possible
// "checkout" machine.
#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;


int main() {

// Set up all variables
string first_name, last_name, full_name; // holds customer name
string product = "shirts";
int amount_purchase;
double cost_each = 9.99;
double total_cost;


// Greet the customer
cout << "Welcome to our " << product << " shop!" << endl;
cout << "What's your name? ";
cin >> first_name;
cout << "What's your last name? ";
cin >> last_name;
full_name = first_name + " " + last_name;
cout << "Nice to meet you, " << full_name << endl;

// Ask how much they'd like to purchase
cout << "How many " << product << " would you like today?";
cin >> amount_purchase;

// Calculate total price
total_cost = amount_purchase * cost_each;

// formatting: set all prices to 2 decimal places
cout <<  setprecision(2) << fixed;

// Give the result
cout << "For " << amount_purchase << " " << product << endl;
cout << "That will be $" << total_cost << endl;
cout << "Thank you for your purchase, have a nice day!" << endl;


return 0; // no errors

}