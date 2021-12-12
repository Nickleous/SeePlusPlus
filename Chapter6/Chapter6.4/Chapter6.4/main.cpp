//
//  main.cpp
//  Chapter6.4
//
//  Created by Nick Blanchard on 9/26/21.
//

#include <iostream>
using namespace std;

void qualify() {
    cout << "You Qualified!!!\n";
}

void noQualify() {
    cout << "Sorry you do not qualify...\n";
}

int main() {
    
    double salary;
    int years;
    
    cout << "This program will determine if you qualify\n";
    cout << "for our credit card.\n";
    cout << "What is your annual salary? ";
    cin >> salary;
    cout << "How many years have you worked at your \ncurrent job? ";
    cin >> years;
    
    if (salary >= 17000.0 && years >= 2)
        qualify();
    else
        noQualify();

    return 0;
}
