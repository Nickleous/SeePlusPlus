//
//  Created by Nick Blanchard on 9/19/21.
//

#include <iostream>
using namespace std;

int main() {
    
    // number of seconds in a minute, hour, and day.
    const int DAY = 86400;
    const int HOUR = 3600;
    const int MINUTE = 60;
    
    int choice;
    double input, answer;
    
    cout << "\nChoose the one you want to concert.\n\n";
    cout << "1. Seconds into Days\n";
    cout << "2. Days into Seconds\n";
    cin >> choice;
    
    if (choice >= 1 && choice <= 2){
    
    switch (choice) {
        case 1:
            cout << "\nEnter the amount of seconds: ";
            cin >> input;
            answer = DAY / input;
            answer = answer / HOUR;
            cout << answer << " Days\n";
            break;
        case 2:
            cout << "\nEnter the amout of days: ";
            cin >> input;
            input = DAY * input;
            cout << input << " Seconds\n";
            break;
        default:
            cout << "\nInvalid entry\n";
            break;
    }
    }else if (choice != 1 || choice != 2) {
        cout << "\nEnter a valid number\n";
        }
    
    
    return 0;
}
