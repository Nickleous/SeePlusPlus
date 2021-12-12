//  Created by Nick Blanchard on 11/21/21.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    
//    fstream inOutFile;
    string word;  // Used to read a word from the file.
    string fileName;
    
    cout << "Enter the file name to open: ";
    getline(cin, fileName);
    
    fstream file(fileName, ios::in);
    
    if (file.fail())
    {
        cout << "The file was not found!" << endl;
        return 1;
    }
    
    string line;
    int counter = 0;
    
    while(getline(file, line))
    {
        ++counter;
    }
    
    cout << "\nThe file has " << counter << " lines total." << endl;
    file.close();
    
    file.open(fileName, ios::in);
    
    if(counter < 15)
    {
        cout << "\nThe file is less than 15 lines.\nThe entire file will be displayed.\n";
        while(getline(file, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        counter = 1;
        cout << "\nThe file has more than 15 lines.\nHere are the first 15 lines.\n";
        
        while (getline(file, line))
        {
            if(counter <= 15)
            {
                cout << line << endl;
            }
            else if (counter > 15)
            {
                break;
            }
            ++counter;
        }
    }

    return 0;
}
