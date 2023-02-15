#include <iostream>
#include "include/ufo_functions.h"
using namespace std;

int main() {
  greet();
  string codeword = "hospital";
  string answer = "________";
  int misses = 0;
  vector<char> incorrect;
  bool guess = false;
  char letter;


  while (answer != codeword && misses < 7) {

    display_misses(misses);

    display_status(incorrect, answer);
    cout << "Please enter your guess: ";
    cin >> letter;

    for (int i = 0; i < codeword.length(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess) {
      cout << "\nCorrect! You're closer to cracking the codeword.\n";
    } else  {
      cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;

  }

  end_game(answer, codeword);
  
}
