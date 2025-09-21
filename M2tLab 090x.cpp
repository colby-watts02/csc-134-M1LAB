// CSC 134
// M2t1 - product sales
// Colby Watts
//9/20/25
// we're going to make the simple possible
// "checkout" machine.
#include <iostream>
using namespace std;


int main() {

// Set up all variables
string first_name, last_name, full_name; // holds customer name
string product = "shirts";
int amount_purchase; 
double cost_each = 14.99;
double total_cost;


// Greet the customer
cout << "Welcome to our " << product << " shop!" << endl;
cout << "What's your name? ";
cin >> first_name;
cout << "What's your last name? ";
cin >> last_name;
full_name = first_name + " " + last_name;
cout << "Nice to meet you, " << full_name << endl;
cin >> amount_purchase;


// Ask how much they'd like to purchase
cout << "How many " << product << " would you like today?";


// Calculate total price
// Give the result



return 0; // no errors

}