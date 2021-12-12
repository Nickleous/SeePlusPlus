//  Chapter10Program1
//
//  Created by Nick Blanchard on 10/30/21.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void showGrade(vector<int>);    //void showGrade(int);
void sortGrade(vector<int> &);  //void sortGrade(vector<int>, int);

int main() {
    
    int grade;
//    int counter = 0;
//    vector<int> testScore(grade);
    int score;
    int i = 0;
    vector<int> testScore(grade);
    
    cout << "Enter Test Scores\n";
    
    do
    {
        cout << "Enter grade for Test " << (i + 1) << ": ";
        cin >> testScore[i];
        score = testScore[i];
        
        i++;
//        counter++;
    } while (score != -1);

    cout << "\nInput Grades are\n";
    
    showGrade(testScore);
    
    sortGrade(testScore);
    
    cout << "\nSorted Grades are\n";
    
    showGrade(testScore);
    
    cout << endl;

    return 0;
}

void showGrade(vector<int> s)
{
    for (unsigned count = 0; count < s.size(); count++)
    {
        cout << s[count] << " ";
    }
}

void sortGrade(vector<int> &s)
{
    int temp;
    bool swap;
    
    do
    {
        swap = false;
        for (unsigned c = 0; c < s.size() - 1; c++)
        {
            if (s[c] > s[c + 1])
            {
                temp = s[c];
                s[c] = s[c + 1];
                s[c + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}
