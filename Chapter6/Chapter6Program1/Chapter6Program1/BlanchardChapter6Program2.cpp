//
//  main.cpp
//  Chapter6Program1
//
//  Created by Nick Blanchard on 10/1/21.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void diceRoll();
bool getChoice();
int points = 0;
void message(int);

int main() {

    unsigned seed;
    seed = time(0);
    srand(seed);
    
    do {
        diceRoll();
    }
    while (getChoice() == true);
    
    cout << "Total Fishing Points: " << points << "\n";
    message(points);
    
    return 0;
}

void diceRoll() {
    int dice = rand() % 6 + 1;
    points += dice;
    
    if (dice == 1){
        cout << "Dice rolled: " << dice << "\nA huge fish!!!\n";
    }
    if (dice == 2){
        cout << "Dice rolled: " << dice << "\nAn old shoe...\n";
    }
    if (dice == 3){
        cout << "Dice rolled: " << dice << "\nA little fish!!!\n";
    }
    if (dice == 4){
        cout << "Dice rolled: " << dice << "\nA medium fish!!!\n";
    }
    if (dice == 5){
        cout << "Dice rolled: " << dice << "\nA big fish!!!\n";
    }
    if (dice == 6){
        cout << "Dice rolled: " << dice << "\nA sun fish!!!\n";
    }
}

bool getChoice() {
    char choice;
    cout << "Play again? Y?N ";
    cin >> choice;
    if (toupper(choice) == 'Y')
        return true;
    else
        return false;
}

void message(int) {
    int pts = points;
        
        if (pts >= 0 && pts <= 10)
            cout << "Try harder\n";
        if (pts > 10 && pts <= 20)
            cout << "Good catch\n";
        if (pts > 20 && pts <= 30)
            cout << "Big day fishing\n";
        if (pts > 30)
            cout << "Pro fisher\n";
}
