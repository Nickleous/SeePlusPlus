//  ufo
//
//  Created by Nick Blanchard on 11/18/21.
//

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "ufo_functions.hpp"
using namespace std;

int main() {

    char again;
    do {
  greet();

    vector<string> codeword {"codecademy", "programming", "randomness", "creation"};

    string code = codeword[rand() % codeword.size()];


  string answer = "__________";
  int misses = 0;
  vector<char> incorrect;
  bool guess = false;
  char letter;

  while (answer != code && misses < 7) {
    
    display_misses(misses);
    display_status(incorrect, answer);

    cout << "\n\nPlease enter your guess: ";
    cin >> letter;

      for (int i = 0; i < code.length(); i++){

      if (letter == code[i]) {

        answer[i] = letter;
        guess = true;

      }

    }

    if (guess) {

      cout << "\nCorrect!\n";

    } else {

      cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;

    }

    guess = false;
    
  }
    end_game(answer, code);
        
        cout << "Play again? Y/N\n";
        cin >> again;
    }while (again == 'y' || again == 'Y');

}

