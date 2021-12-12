//
//  main.cpp
//  Program 2-13
//
//  Created by Nick Blanchard on 7/25/21.
//  This program demonstrates that characters are actually
//  stored internally by their ASCII interger values.

#include <iostream>
using namespace std;

int main()
{
    char letter;
    
    letter = 65;    // 65 is the ASCII code for the character A.
    cout << letter << endl;
    
    letter = 66;    // 66 is the ASCII code for the character B.
    cout << letter << endl;
    
    return 0;
}
