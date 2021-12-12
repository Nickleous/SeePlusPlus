//  Chapter7Program1
//
//  Created by Nick Blanchard on 10/10/21.
//
#include <iostream>
using namespace std;

//Date class Declaration
class Date
{
private:
    int month, day, year;
    
public:
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth();
    int getDay();
    int getYear();
};

//Date class member function implementation
void Date::setMonth(int m)
{
    if (month >= 1 || month <= 12)
        month = m;
    else
    {
        month = 1;
        cout << "Invalid month. Using default value of 1.\n";
    }
}
void Date::setDay(int d)
{
    if (day >= 1 || day <= 31)
        day = d;
    else
    {
        day = 1;
        cout << "Invalid day. Using default value of 1.\n";
    }
}
void Date::setYear(int y)
{
    year = y;
}

int Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}
int Date::getYear()
{
    return year;
}

int main()
{
    Date newDate;
    int newMonth, newDay, newYear;
    
    cout << "Month: ";
    cin >> newMonth;
    cout << "Day: ";
    cin >> newDay;
    cout << "Year: ";
    cin >> newYear;
    
    newDate.setMonth(newMonth);
    newDate.setDay(newDay);
    newDate.setYear(newYear);
    
    cout << newDate.getMonth() << "/" << newDate.getDay() << "/" << newDate.getYear() << endl;
    
    return 0;
}
