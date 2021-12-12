//  Piggy Bank
//
//  Created by Nick Blanchard on 10/23/21.
//

#include <iostream>
using namespace std;

int main() {
    
    double pesos, reais, soles, dollars, yen, euro, rupee;

    cout << "Enter number of Colombian Pesos: ";
    cin >> pesos;
    cout << "Enter number of Brazilian Reais: ";
    cin >> reais;
    cout << "Enter number of Peruvian Soles: ";
    cin >> soles;
    cout << "Enter number of Japanese Yen: ";
    cin >> yen;
    cout << "Enter number of European Euro: ";
    cin >> euro;
    cout << "Enter number of Indian Rupee: ";
    cin >> rupee;
    
    double conversion_rate1 = .05; //pesos to dollars
    double conversion_rate2 = 1.9; //reais to dollars
    double conversion_rate3 = .24; //soles to dollars
    double conversion_rate4 = .86; //euro to dollars
    double conversion_rate5 = 113.57; //yen to dollars
    double conversion_rate6 = 74.99; //rupee to dollars

    dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles) + (conversion_rate4 * euro) + (conversion_rate5 * yen) + (conversion_rate6 * rupee);

    std::cout << "US Dollars = $" << dollars << "\n";
    
    return 0;
}
