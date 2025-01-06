#include <iostream>
using namespace std;
int main() {
    int choice, quantity, price;
    int totalCost;
    cout << "Grocery Store Menu\n";
    cout << "1. Apples (Rs. 2000 per kg)\n";
    cout << "2. Bananas (Rs. 50 per dozen)\n";
    cout << "3. Rice (Rs. 150 per kg)\n";
    cout << "4. Milk (Rs. 120 per liter)\n";
    cout << "5. Eggs (Rs. 12 per egg)\n";

    cout << "Enter the item number you want to buy (1-5): ";
    cin >> choice;
    cout << "Enter the quantity: ";
    cin >> quantity;
    
    switch (choice) {
        case 1:
        // Price per kg for Apples
            price = 2000; 
            break;
        case 2:
        // Price per dozen for Bananas
            price = 50; 
            break;
        case 3:
        // Price per kg for Rice
            price = 150; 
            break;
        case 4:
        // Price per liter for Milk
            price = 120; 
            break;
        case 5:
        // Price per egg
            price = 12; 
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    // Display the total cost
    totalCost = price * quantity;
    cout << "Total cost: "<< endl;

    return 0;
}
