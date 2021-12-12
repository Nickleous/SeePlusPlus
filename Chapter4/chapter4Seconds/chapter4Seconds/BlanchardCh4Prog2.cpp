//
//  Created by Nick Blanchard on 9/19/21.
//

#include <iostream>
using namespace std;

int main(){
   
    const int DAY = 86400;      //seconds in a day
    const int HOUR = 3600;     //seconds in an hour
    const int MINUTE = 60;     //seconds in a minute
    int userTime, days, hours, minutes;
    
    cout << "Enter the amount of seconds you would like to know.\n";
    cin >> userTime;
    
    days = userTime / DAY;
    userTime -= days * DAY;
    
    hours = userTime / HOUR;
    userTime -= hours * HOUR;
    
    minutes = userTime / MINUTE;
    userTime -= minutes * MINUTE;
    
    if(days > 0){
        cout << days  << " days, " << hours << " hours, " << minutes << " minutes, and " << userTime << " seconds\n";
        }
    else if (hours > 0){
        cout << hours << " hours, " << minutes << " minutes, and " << userTime << " seconds\n";
        }
    else if (minutes > 0){
        cout << minutes << " minutes, and " << userTime << " seconds\n";
        }
    else{
        cout << userTime << " seconds\n";
        }
    
    return 0;
}
