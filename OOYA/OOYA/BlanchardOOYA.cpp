//  OOYA
//
//  Created by Nick Blanchard on 11/14/21.
//

#include <iostream>
#include "profile.hpp"
using namespace std;

int main() {

  Profile nick("Nick Blanchard", 42, "Mississippi", "USA", "he/him");
  nick.add_hobby("listening to audiobooks");
  nick.add_hobby("playing hockey, baseball, and soccer");
  nick.add_hobby("writing a LitRPG book");
  nick.add_hobby("reading advice columns");

cout << nick.view_profile() << "\n";

    return 0;
};
