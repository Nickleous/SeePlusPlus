//  Chapter11Project
//
//  Created by Nick Blanchard on 11/7/21.
//

#include <iostream>
#include <string>
#include "conflict_functions.h"
using namespace std;

int main() {
    
    int  answer;
    
      cout << "Choose your adventure!!!\n";
      cout << "Who shoud you play as?\n";
      cout << "1) Hunter\n2) Rogue\n3) Mage\n";
      cin >> answer;

        if (answer == 1)
            {
            cout << "\nYou chose Hunter as your class\n";
            }
        if (answer == 2)
            {
            cout << "\nYou chose Rogue as your class\n";
            }
        if (answer == 3)
            {
            cout << "\nYou chose Mage as your class\n";
            }
    
    fork();
     
    return 0;
}
