//
//  main.cpp
//  Programming Challenge 2
//
//  Created by Nick Blanchard on 7/25/21.
//  This program calculates baseball costs.

#include <iostream>
using namespace std;

int main()
{
    double balls, cost, total;
    
    //  Get the number of balls.
    cout << "How many balls did you use? ";
    cin >> balls;
    
    //  Get the cost of a ball.
    cout << "How much did the balls cost? " ;
    cin >> cost;
    
    //  Calculate total.
    total = balls * cost;
    
    //  Display the total.
    cout << "You have spent $" << total << " on baseballs." << endl;
    
    return 0;
}
