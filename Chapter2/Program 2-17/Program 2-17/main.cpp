//
//  main.cpp
//  Program 2-17
//
//  Created by Nick Blanchard on 7/25/21.
//  This program displays the size of various data types.

#include <iostream>
using namespace std;

int main()
{
    long double apple;
    
    cout << "The size of an integer is " << sizeof(int);
    cout << " bytes.\n";
    cout << "The size of a long integer is " << sizeof(long);
    cout << " bytes.\n";
    cout << "An apple can be eaten in " << sizeof(apple);
    cout << " bytes!\n";
    
    return 0;
}
