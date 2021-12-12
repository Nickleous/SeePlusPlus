//
//  ufo_functions.hpp
//  ufo
//
//  Created by Nick Blanchard on 11/18/21.
//

#ifndef ufo_functions_hpp
#define ufo_functions_hpp

#include <stdio.h>
#include <vector>
using namespace std;

void display_misses(int misses);

// Declare functions
void greet();
void display_status(vector<char> incorrect, string answer);
void end_game(string answer, string code);

#endif /* ufo_functions_hpp */
