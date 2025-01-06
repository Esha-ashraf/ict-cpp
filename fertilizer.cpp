#include <iostream>
using namespace std;
int main() {
    double bagSize, bagCost, coverageArea;
    double costPerPound, costPerSquareFoot;
    cout << "Enter the size of the fertilizer bag in pounds: ";
    cin >> bagSize;
    cout << "Enter the cost of the bag: ";
    cin >> bagCost;
    cout << "Enter the area in square feet that can be covered by the bag: ";
    cin >> coverageArea;
    costPerPound = bagCost / bagSize;
    costPerSquareFoot = bagCost / coverageArea;
    cout << "The cost of the fertilizer per pound is: $" << costPerPound << endl;
    cout << "The cost of fertilizing per square foot is: $" << costPerSquareFoot << endl;
    return 0;
}
