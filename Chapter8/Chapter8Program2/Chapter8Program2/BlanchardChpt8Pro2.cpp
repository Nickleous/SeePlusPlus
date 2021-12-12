//  Chapter8Program2
//
//  Created by Nick Blanchard on 10/17/21.
//

#include <iostream>
using namespace std;

int main() {

    const int TOTAL_NUMBERS = 20;
    string romanNumeral[TOTAL_NUMBERS];
    int number;
    
    romanNumeral[0] = "I";
    romanNumeral[1] = "II";
    romanNumeral[2] = "III";
    romanNumeral[3] = "IV";
    romanNumeral[4] = "V";
    romanNumeral[5] = "VI";
    romanNumeral[6] = "VII";
    romanNumeral[7] = "VIII";
    romanNumeral[8] = "IX";
    romanNumeral[9] = "X";
    romanNumeral[10] = "XI";
    romanNumeral[11] = "XII";
    romanNumeral[12] = "XIII";
    romanNumeral[13] = "XIV";
    romanNumeral[14] = "XV";
    romanNumeral[15] = "XVI";
    romanNumeral[16] = "XVII";
    romanNumeral[17] = "XVIII";
    romanNumeral[18] = "XIX";
    romanNumeral[19] = "XX";
    
    
    do {
        cout << "Enter a number: ";
        cin >> number;
    
        while (number < 0 || number > TOTAL_NUMBERS)
        {
            cout << "Enter a number between 1 and 20.\n";
            cin >> number;
        }
        
    cout  << "Number " << number << " in Roman Numeral is: " << romanNumeral[number - 1] << "\n";
        
    }
    while (number != 0);
    
    return 0;
}
