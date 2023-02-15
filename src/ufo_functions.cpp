#include <iostream>
#include <vector>
#include "include/ufo_functions.h"

// Define functions
using namespace std;

void display_status(vector<char> incorrect, string answer) {
  cout << "Incorrect Guesses: ";
  for (int i = 0; i < incorrect.size(); i++) {
    cout << incorrect[i] << ' ';
    }

  cout << "\nCodeword: ";
  for (int i = 0; i < answer.length(); i++) {
    cout << answer[i] << ' ';
    }
}

void end_game(string answer, string codeword) {
  if (answer == codeword) {
      cout << "\nHooray! You saved the person and earned a medal of honor! Codeword was: \n" << codeword;
    } else {
      cout << "\nOh no! The UFO just flew away with another person! Codeword was: \n" << codeword;
    }
}

void greet() {
  cout << "=============\n";
  cout << "UFO: The Game\n";
  cout << "=============\n";
  cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
}

void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-l^l-.                         \n";
    cout << "             /_....._ll                       \n";
    cout << "         .-l`         `l-.                    \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     ll        (  Send help! ) \n";
    cout << "             /   0   ll      / `-----------'  \n";
    cout << "            /  --|--  ll    /                 \n";
    cout << "           /     |     ll                     \n";
    cout << "          /     l l     ll                    \n";
    cout << "         /               ll                   \n";

  }
  else if (misses == 2) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-l^l-.                         \n";
    cout << "             /_....._ll                       \n";
    cout << "         .-l`         `l-.                    \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /  ^  ll        (  Send help! ) \n";
    cout << "             /   0   ll      / `-----------'  \n";
    cout << "            /  --|--  ll    /                 \n";
    cout << "           /     |     ll                     \n";
    cout << "          /     l l     ll                    \n";
    cout << "         /               ll                   \n";

  }
  else if (misses == 3) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-l^l-.                         \n";
    cout << "             /_....._ll                       \n";
    cout << "         .-l`         `l-.                    \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     ll        (  Send help! ) \n";
    cout << "             /       ll      / `-----------'  \n";
    cout << "            /  --|--  ll    /                 \n";
    cout << "           /     |     ll                     \n";
    cout << "          /     l l     ll                    \n";
    cout << "         /               ll                   \n";

  }
  else if (misses == 3) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-l^l-.                         \n";
    cout << "             /_....._ll                       \n";
    cout << "         .-l`         `l-.                    \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     ll        (  Send help! ) \n";
    cout << "             /       ll      / `-----------'  \n";
    cout << "            /  -- --  ll    /                 \n";
    cout << "           /     |     ll                     \n";
    cout << "          /     l l     ll                    \n";
    cout << "         /               ll                   \n";

  }
  else if (misses == 4) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-l^l-.                         \n";
    cout << "             /_....._ll                       \n";
    cout << "         .-l`         `l-.                    \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     ll        (  Send help! ) \n";
    cout << "             /       ll      / `-----------'  \n";
    cout << "            /         ll    /                 \n";
    cout << "           /     |     ll                     \n";
    cout << "          /     l l     ll                    \n";
    cout << "         /               ll                   \n";

  }
  else if (misses == 5) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-l^l-.                         \n";
    cout << "             /_....._ll                       \n";
    cout << "         .-l`         `l-.                    \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     ll        (  Send help! ) \n";
    cout << "             /       ll      / `-----------'  \n";
    cout << "            /         ll    /                 \n";
    cout << "           /           ll                     \n";
    cout << "          /     l l     ll                    \n";
    cout << "         /               ll                   \n";

  }
  else if (misses == 6) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-l^l-.                         \n";
    cout << "             /_....._ll                       \n";
    cout << "         .-l`         `l-.                    \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     ll        (  Send help! ) \n";
    cout << "             /       ll      / `-----------'  \n";
    cout << "            /         ll    /                 \n";
    cout << "           /           ll                     \n";
    cout << "          /             ll                    \n";
    cout << "         /               ll                   \n";

  }

}