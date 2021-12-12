//
//  BlanchardCh1Prog3.cpp
//  
//
//  Created by Nick Blanchard on 8/30/21.
//
#include <iostream>
using namespace std;

int main()
{
    double purchasePrice = 89.40;
    double salesTax = .07;
    double tip15 = .15, tip18 = .18, tip20 = .20;
    double totalTax, total, totalTip;
    
    totalTax = purchasePrice * salesTax;
    total = purchasePrice + totalTax;
    
    cout << "Meal price is:\t $" << purchasePrice << endl;
    cout << "Sales tax is:\t\t " << salesTax * 100 << "%" << endl;
    cout << "Total tax is:\t\t $" << totalTax << endl;
    cout << "Total amount is:\t $" << total << endl;
    
    totalTip = (total * tip15) + total;
    cout << "Total amount with 15% tip: $" << totalTip << endl;
    
    return 0;
}
