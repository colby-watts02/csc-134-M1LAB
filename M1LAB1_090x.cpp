/*
CSC 134
M1LAB1 - *Something* Sales
Colby Watts
9/18/25

*/

#include <iostream>
using namespace std;

int main() {
// This program acts like a storefront
// Set up our variables
string item_name = "shirts";
int number_of_items = 15;
double cost_each = 11.99; // $11.99
double total_cost;

// Greet the customer
cout << "welcome to the " << item_name << " Shop!" << endl;

// Assk for the order
// assume they'll buy everything
cout << "We have  " << number_of_items << " " << item_name << endl;
cout << "Each costs $" << cost_each << endl;

// Calculate the total price
total_cost = number_of_items * cost_each;

// Out put the results
cout << "to purchase all " << number_of_items << " will cost $" << total_cost << " total." << endl;
cout << "Thank you, please come again!" << endl; 

return 0; // no errors

}