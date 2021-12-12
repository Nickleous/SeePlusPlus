//
//  main.cpp
//  Program 2-9
//
//  Created by Nick Blanchard on 7/25/21.
//  This program has variables of several of the interger types.

#include <iostream>
using namespace std;

int main()
{
    int checking;
    unsigned int miles;
    long days;
    
    checking = -20;
    miles = 4276;
    days = 190000;
    
    cout << "We have made a long journey of " << miles << " miles.";
    cout << "\nOur checking account balance is " << checking;
    cout << "\nAbout " << days << " days ago Columbus ";
    cout << "stood on this spot.\n";
    
    return 0;
}
