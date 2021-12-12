//
//  Chapter5Program1
//
//  Created by Nick Blanchard on 9/24/21.
//
#include <iostream>

using namespace std;

int main() {
    
    char ch;
    
        do{
        for (int i = 32; i <= 127; i++){
            if (i % 16 == 0)
            cout << endl;
        cout << (char)i << " ";
        }
            cout << "\nRun again? ";
            cin >> ch;
        }while (ch == 'Y' || ch == 'y');
    
    cout << endl;
    
    return 0;
}
