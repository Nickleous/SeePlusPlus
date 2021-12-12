//
//  conflict_functions.h
//  Chapter11Project
//
//  Created by Nick Blanchard on 11/7/21.
//

#ifndef conflict_functions_h
#define conflict_functions_h
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int dice1()
{
    unsigned seed;
    seed = time(0);
    srand(seed);
    return (rand() % 100 + 1);
}
int dice2()
{
    unsigned seed;
    seed = time(0);
    srand(seed);
    return (rand() % 100 + 1);
}
void right()
{
    int r, monster, roll;
    
    cout << "\nWhile traveling down the right path you come across a monster to fight.\n";
    cout << "You must roll your dice againts the monsters dice to win.\n";
    monster = dice1();
    do
    {
        monster = dice1();
    }while (monster == roll);
    r = dice2();
    do
    {
        r = dice2();
    }while (roll == r || monster == r);
    
    cout << "\nYou rolled: " << monster << "\n";
    cout << "Monster rolled: " << r << "\n\n";
}
void left()
{
    cout << "\nWhile traveling down the left path you fall into a trap.\n";
    cout << "You must roll the dice and beat the trap to survive\n";
    
    int survive = dice1();
    int trap = dice2();

    do{
        trap = dice2();
    }while (survive == trap);
    
    cout << "\nYour roll: " << survive;
    cout << "\nGames roll: " << trap;
}
void fork()
{
    int roll;
    
    cout << "\nWhile traveling down a path you come to a fork in the road.\nShould you travel to the right or to the left?\n";
    cout << "Lets roll the dice and see what way you will go.\n\n1-50 you will go right\n51-100 you will go left.\n";
    cout << "**** Rolling the dice ****\n";
    roll = dice1();
    cout << roll << " was rolled.\n";
    
    if (roll >= 1 && roll <= 50)
    {
        cout << "Going right.\n";
        right();
    }
    if (roll > 50 && roll <= 100)
    {
        cout << "Going left.\n";
        left();
    }
}
#endif /* conflict_functions_h */
