//
//  main.cpp
//  Chapter5Program3
//
//  Created by Nick Blanchard on 9/24/21.
//
/*   Critical Failure will be displayed in red and a Critical Success will be displayed in green.*/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    unsigned seed;
    seed = time(0);
    srand(seed);
    
    int P1dice = rand() % 20 + 1;
    int P2dice = rand() % 20 + 1;
    string P1, P2;
    int P1score = 0;
    int P2score = 0;

    cout << "Enter player 1 name: ";
    cin >> P1;
    cout << "Enter player 2 name: ";
    cin >> P2;
    
    P1score = P1dice;
    P2score = P2dice;
    
    if (P1dice == P2dice)
    {
        cout << "\n\n!!!Evenly Matched!!!\n";
        cout << P1 << " rolled: " << P1score << "\n";
        cout << P2 << " rolled: " << P2score << "\n";
    }
    else if (P1dice == 1)
    {
        cout << "\n\n" << P2 << " is the WINNER!!!\n";
        cout << RED << P1 << " rolled a Critical Failure!!!\n";
        cout << P1 << " rolled: " << P1score << "\n";
        cout << P2 << " rolled: " << P2score << "\n";
    }
    else if (P2dice == 1)
    {
        cout << "\n\n" << P1 << " is the WINNER!!!\n";
        cout << RED << P2 << " rolled a Critical Failure!!!\n";
        cout << P1 << " rolled: " << P1score << "\n";
        cout << P2 << " rolled: " << P2score << "\n";
    }
    else if (P1dice == 20)
    {
        cout << "\n\n" << P1 << " is the WINNER!!!\n";
        cout << GREEN << P1 << " rolled a Critical Success!!!\n";
        cout << P1 << " rolled: " << P1score << "\n";
        cout << P2 << " rolled: " << P2score << "\n";
    }
    else if (P2dice == 20)
    {
        cout << P2 << " is the WINNER!!!\n";
        cout << GREEN << P2 << " rolled a Critical Success!!!\n";
        cout << P1 << " rolled: " << P1score << "\n";
        cout << P2 << " rolled: " << P2score << "\n";
    }
    
    else if (P1dice > P2dice)
    {
        cout << "\n\n" << P1 << " is the WINNER!!!\n";
        cout << P1 << " rolled: " << P1score << "\n";
        cout << P2 << " rolled: " << P2score << "\n";
    }
    else if (P2dice > P1dice)
    {
        cout << "\n\n" << P2 << " is the WINNER!!!\n";
        cout << P1 << " rolled: " << P1score << "\n";
        cout << P2 << " rolled: " << P2score << "\n";
    }
    
    return 0;
}
