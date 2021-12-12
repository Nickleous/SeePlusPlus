//  RockPaperScissorsLizardSpock
//
//  Created by Nick Blanchard on 10/30/21.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  
  int player1;
        
    cout << "=================================\n";
    cout << "Rock Paper Scissors Lizard Spock!\n";
    cout << "=================================\n";
    
do {
    
    cout << "Select -1 To End\n1) Rock ✊\n2) Paper ✋\n3) Scissors ✌️\n4) Lizard 🦎\n5) Spock 🖖\n  SHOOT!!!\n";
    cin >> player1;
  
  srand(time(NULL));
  int player2 = rand() % 5 + 1;
  
  cout << "\n";

  if (player1 != 1 && player1 != 2 && player1 != 3 && player1 != 4 && player1 != 5 && player1 != -1) {
    
    cout << "Invalid. Choose 1, 2, 3, 4 or 5: ";
    cin >> player1;
    cout << "\n";
  }
  
  if (player1 == player2) {
      
    cout << "DRAW!!!\n";
  }
  
  if (player1 == 1) {

    if (player2 == 2) {
      cout << "Paper covers Rock. Computer Wins!!!\n";
    }
    else if (player2 == 3) {
      cout << "Rock smashes Scissors. You Win!!!\n";
    }
    else if (player2 == 4) {
      cout << "Rock crushes Lizard. You Win!!!\n";
    }
    else if (player2 == 5) {
      cout << "Spock vaporizes Rock. Computer Wins!!!\n";
    }
  }
  else if (player1 == 2) {

    if (player2 == 1) {
      cout << "Paper covers Rock. You Win!!!\n";
    }
    else if (player2 == 3) {
      cout << "Scissors cuts Paper. Computer Wins!!!\n";
    }
    else if (player2 == 4) {
      cout << "Lizard eats Paper. Computer Wins!!!\n";
    }
    else if (player2 == 5) {
      cout << "Paper disproves Spock. You Win!!!\n";
    }
  }
  else if (player1 == 3) {

    if (player2 == 1) {
      cout << "Rock crushes Scissors. Computer Wins!!!\n";
    }
    else if (player2 == 2) {
      cout << "Scissors cuts Paper. You Win!!!\n";
    }
    else if (player2 == 4) {
      cout << "Scissors decapitate Lizard. You Win!!!\n";
    }
    else if (player2 == 5) {
      cout << "Spock smashes Scissors. Computer Wins!!!\n";
    }
  }
  else if (player1 == 4) {

    if (player2 == 1) {
      cout << "Rock crushes Lizard. Computer Wins!!!\n";
    }
    else if (player2 == 2) {
      cout << "Lizard eats Paper. You Win!!!\n";
    }
    else if (player2 == 3) {
      cout << "Scissors decapitate Lizard. Computer Wins!!!\n";
    }
    else if (player2 == 5) {
      cout << "Lizard poisons Spock. You Win!!!\n";
    }
  }
  else if (player1 == 5) {

    if (player2 == 1) {
      cout << "Spock vaporizes Rock. You Win!!!\n";
    }
    else if (player2 == 2) {
      cout << "Paper disproves Spock. Computer Wins!!!\n";
    }
    else if (player2 == 3) {
      cout << "Spock smashes Scissors. You Win!!!\n";
    }
    else if (player2 == 4) {
      cout << "Lizard poisons Spock. Computer Wins!!!\n";
    }
  }
} while (player1 != -1);
  
  return 0;
  
}
