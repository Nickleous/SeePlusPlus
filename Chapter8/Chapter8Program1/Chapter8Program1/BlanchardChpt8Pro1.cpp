 //  Chapter8Program1
//
//  Created by Nick Blanchard on 10/17/21.
//

#include <iostream>
//#include "Header.h"
using namespace std;

int countPerfect(int);

int main() {
    
    int testScores[5];
    int grade, counter;
    int keep = 5;
    
    cout << "Enter test grades\n" << endl;
    
    for (int i = 0; i < keep; i++)
    {
        cout << "Grade for test #" << i + 1 << " : ";
        cin >> grade;
        
        while (grade < 0 || grade > 100)
        {
            cout << "Enter between 0 and 100 for a grade\nGrade: ";
            cin >> grade;
        }
        testScores[i] = grade;
    }

    for (counter = 0; counter < keep; counter++)
    {
        cout << "Test Score: " << testScores[counter] << "\n";
        countPerfect(grade);
    }
    
    //countPerfect();
    return 0;
}


int countPerfect(int g)
{
    if (g == 100)
            return 1;
        else
            return 0;
}


