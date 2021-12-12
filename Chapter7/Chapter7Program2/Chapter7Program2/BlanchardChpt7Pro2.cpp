//  Chapter7Program2
//
//  Created by Nick Blanchard on 10/10/21.
//

#include <iostream>
#include <iomanip>
using namespace std;

class Tip
{
private:
    double taxRate;
    
public:
    Tip(double rate)
    {
        taxRate = rate;
    }
    Tip()
    {
        taxRate = 0.07;
    }
    double computeTip(double cost, double r)
    {
        taxRate = r;
        double total = (cost + cost * taxRate);
        return total;
    }
};

int main()
{
    Tip newTip;
    double meal = 0.0, tipAmount = 0.0;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "How much was the meal: ";
    cin >> meal;
    
    cout << "$" << newTip.computeTip(meal, tipAmount) << endl;
    
    return 0;
}
