//
//  Chpt4Pro1
//
//  Created by Nick Blanchard on 9/19/21.
//

#include <iostream>
using namespace std;

int main(){
    
    int one, two;
    
    cout << "Enter two integers: ";
    cin >> one >> two;
    
    if (!one || !two){
        cout << "\nInvalid input\n";
    }
    else if (one == two){
        cout << "\nThey are equal\n";
    }else if (one > two){
        cout << "\n" << one << " is greater than " << two << "\n";
    }else
        cout << "\n" << two << " is greater than " << one << "\n";
    
    
    return 0;
}
