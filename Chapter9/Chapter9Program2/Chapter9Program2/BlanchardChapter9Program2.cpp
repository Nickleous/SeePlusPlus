//  Chapter9Program2
//
//  Created by Nick Blanchard on 10/24/21.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class SnowReport
{
private:
    string month;
    int date;
    double snowInches;
    
public:
    SnowReport()
    {
        date = 1;
        snowInches = 0.0;
    }
    
    SnowReport(string m, int d, double s)
    {
        date = d;
        snowInches = s;
    }
 
    void setMonth(string mo)
    {
        month = mo;
    }
  
    void setDate(int da)
    {
        date = da;
    }
    
    void setSnow(int s)
    {
        snowInches = s;
    }
    
    string getMonth() const
    {
        string mo = month;
        return mo;
    }
    
    int getDate() const
    {
        return date;
    }
    
    double getSnow() const
    {
        return snowInches;
    }
};

//Function prototypes
void displaySnowReport(const SnowReport[], int);
void sort(SnowReport[], int);

int main()
{
    const int SIZE = 7;
    string month;
    
    SnowReport report[SIZE];
    
    cout << "Enter the month: ";
    cin >> month;
    
    for (int i = 0; i < SIZE; i++)
    {
        int da = 1;
        double in;
        
        report[i].setMonth(month);
        cout << "Date: ";
        cin >> da;
        report[i].setDate(da);
        cout << "Snow fall amount: ";
        cin >> in;
        report[i].setSnow(in);
    }
    
    cout << "\n\nBlanchard's SSX Tricky Extreme Ski Slopes\n";
    cout << "Snow Report for " << month << "\n";
    
    //display the report
    displaySnowReport(report, SIZE);
    
    //sort the stuff
    sort(report, SIZE);
    
    cout << "\n\nSorted snow fall by ascending inches\n";
    //Display sorted
    displaySnowReport(report, SIZE);
    
    return 0;
}

void displaySnowReport(const SnowReport object[], int size)
{
    cout << setw(5) << left << "Month " << setw(5) << left
    << "Date" << right << "Inches of Snow\n";
    
    for (int index = 0; index < size; index++)
    {
        cout << setw(7) << left << object[index].getMonth()
             << setw(11) << left << object[index].getDate()
             << right << object[index].getSnow() << endl;
    }
}

void sort(SnowReport array[], int size)
{
    SnowReport temp;
    bool swap;
    
    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count].getSnow() > array[count +1].getSnow())
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    }while (swap);
}//End sort
