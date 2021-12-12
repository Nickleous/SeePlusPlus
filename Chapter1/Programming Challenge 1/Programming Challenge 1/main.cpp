//
//  main.cpp
//  Programming Challenge 1
//
//  Created by Nick Blanchard on 7/25/21.
//  Candy Bar Sales

#include <iostream>
using namespace std;

int main()
{
    double sold, cost, total;
    
    //  Get the number of candy bars sold.
    cout << "How many candy bars did you sell? ";
    cin >> sold;
    
    //  Get the cost of a candy bar.
    cout << "How much does the candy cost? ";
    cin >> cost;
    
    //  Calculate total.
    total = sold * cost;
    
    //  Display the pay.
    cout << "You have earned $" << total << endl;
    
    return 0;
}
