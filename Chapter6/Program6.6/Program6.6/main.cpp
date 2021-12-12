//
//  main.cpp
//  Program6.6
//
//  Created by Nick Blanchard on 9/26/21.
//

#include <iostream>
using namespace std;

void displayValue(int num);

int main() {
    
    cout << "I am passing 5 to the displayValue.\n";
    displayValue(5);    //Call to displayValue with argument 5
    cout << "Now I am back in main.\n";
    
    return 0;
}

/*************************************************
            displayValue
 This function uses an integer parameter
 whose value is displayed.
 **************************************************/
void displayValue(int num)
{
    cout << "The value is " << num << endl;
}
