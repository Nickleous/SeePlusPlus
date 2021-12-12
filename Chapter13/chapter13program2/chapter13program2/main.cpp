//
//  main.cpp
//  chapter13program2
//
//  Created by Nick Blanchard on 11/21/21.
//    
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

string word, line;  // Used to read a word from the file.
string fileName;
int counter = 0;
int wordCount = 0;
    
cout << "Enter the file name to open: ";
getline(cin, fileName);


fstream file(fileName, ios::in);

cout << "Enter the word to search for: ";
getline(cin, word);
    
if (file.fail())
{
    cout << "The file was not found!" << endl;
    return 1;
}

while(getline(file, line))
{
    ++counter;
}

cout << "\nThe file has " << counter << " lines total." << endl;
file.close();

file.open(fileName, ios::in);
    
    //New Starting point
    cout << "The word '" << word << "' has been found on line\n";
    while (!file.eof())
    {
        getline(file, line);
        size_t found = line.find(word);
        if (found != string::npos)
        {
            cout << line << "\n";
            wordCount++;
        }
    }
    cout << word << " has been found " << wordCount << " times.\n";
    //New Ending Point
 
return 0;
}
