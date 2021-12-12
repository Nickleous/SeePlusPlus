//  Chapter9Program1
//
//  Created by Nick Blanchard on 10/23/21.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

//Function prototype
int locate_number(const int [], int, int);

const int SIZE = 18;

int main() {
    
    //HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE); // Gives colored text
    
    int account_numbers[SIZE] = {5658845, 4520125, 7895122, 8977541, 8451277, 1302820,
        8080152, 4562554, 5552022, 5050552, 7825877, 1250255, 1005231, 6545231,
        3852085, 7576651,7881200, 4581001};
    int results, user_input;
    
    cout << "Enter Account Number: ";
    cin >> user_input;
    
    results = locate_number(account_numbers, SIZE, user_input);
    
    if (results == -1)
    {
        cout << user_input << " Invalid number\n";
        //system("Color E4");
        //SetConsoleTextAttribute(screen, 4);
    }
    else
    {
        cout << "Valad number\n";
        //SetConsoleTextAttribute(screen, 7);
    }
    
    return 0;
}

//locate_number function
int locate_number(const int list[], int size, int value)
{
    int index = 0;      //subscript for array number
    int position = -1;  //record position of search
    bool found = false; //flag indicate if valuewas found
    
    while (index < size && !found)
    {
        if (list[index] == value)   //if the value is found
        {
            found = true;       //set flag
            position = index;   //record the values index
        }
        index++;                //move to next element
    }
    return position;
}
