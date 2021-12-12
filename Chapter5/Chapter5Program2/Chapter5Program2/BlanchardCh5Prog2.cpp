//
//  Chapter5Program2
//
//  Created by Nick Blanchard on 9/24/21.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int mph, distance, hours, minutes, totalHours;
    
    cout << "How fast are you driving: ";
    cin >> mph;
    cout << "How far is the trip: ";
    cin >> distance;
    
    hours = distance / mph;
    minutes = distance % mph;
    
    for (totalHours = 1; totalHours <= hours; totalHours++){
        cout << totalHours << " hour driven " << totalHours * mph << " miles\n";
       }
    
        cout << hours << " hours " << minutes << " minutes driven " << distance << " miles." << endl;
    
    return 0;
}
