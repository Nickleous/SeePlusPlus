//
//  main.cpp
//  Program 1-1
//
//  Created by Nick Blanchard on 7/25/21.
//  This program calculates the user's pay.

#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;
    
    //  Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;
    
    //  Get the hourly rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;
    
    //  Calculate pay.
    pay = hours * rate;
    
    //  Display the pay.
    cout << "You have earned $" << pay << endl;
    
    return 0;
}
