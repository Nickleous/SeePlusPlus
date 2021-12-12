//
//  BlanchardCh1Prog2
//
//  Created by Nick Blanchard on 8/30/21.
//

#include <iostream>
using namespace std;

int main()
{
    double purchasePrice = 387.00;
    double salesTax = .07;
    double totalTax;
    double total;
    
    totalTax = purchasePrice * salesTax;
    total = purchasePrice + totalTax;
    
    cout << "The purchase price is:\t $" << purchasePrice << endl;
    cout << "The sales tax is:\t\t " << salesTax * 100 << "%" << endl;
    cout << "The total tax is:\t\t $" << totalTax << endl;
    cout << "The total amount is:\t $" << total << endl;
    
    return 0;
}
