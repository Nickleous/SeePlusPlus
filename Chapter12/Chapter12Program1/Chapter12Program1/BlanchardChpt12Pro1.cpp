//  Chapter12Program1
//  Created by Nick Blanchard on 11/14/21.
//

#include <iostream>
#include <cstring>
//#include <cctype>
//#include <string>
using namespace std;

int wordCount(string sentence);
int letterCount(string sentence);

int main(){
    
    string myString;
    
    cout << "Enter something: ";
    getline(cin, myString);
    
    cout << "\nThere are " << wordCount(myString) << " words and " << letterCount(myString) << " letters.";

    double average = 0.0;
    average = (letterCount(myString)/wordCount(myString));
    cout << "\nThe average number of letters per word are " << average << " letters.\n";
    
    return 0;
}

int letterCount(string sentence){
    int letters = 0;
    for(int count = 0; count < sentence.length(); count++)
        if(isalpha(sentence[count]))
            letters++;
    return letters;
}

int wordCount(string sentence){
    int len = sentence.length();
    if(len == 0)
        return 0;

    int words = 1;
    for(int i = 0; i < len; i++)
        if(sentence[i] == ' ' && sentence[i+1] != ' ')
            words++;

        if(sentence[0] == ' ')
            words--;

        if(sentence[sentence.length()-1] == ' ')
            words--;

    return words;
}
