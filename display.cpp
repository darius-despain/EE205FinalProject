// function definition for user interface display
// 
// 4/27/2017 tyler 
//    Updated the displays so that it would be able to show the proper 
//    form regardless of which form it is
//    Added welcomeDisplay()
//

#include "tamagotchi.h"
#include <iomanip>

void tamagotchi::welcomeDisplay() {   // function to display what the game is about and only go away with user input
  std::string n;
  
  std::cout << "\t\t\tWELCOME!!!" << std::endl;
  std::cout << "You have stumbled across a mysterious egg and" << std::endl;
  std::cout << "have decided that you want to take care of" << std::endl;
  std::cout << "whatever hatches from the egg." << std::endl << std::endl;

  std::cout << "In order to do so, you will have to feed it," << std::endl;
  std::cout << "clean it, and even play with it. There will" << std::endl;
  std::cout << "be times that it will get sick and need your" << std::endl;
  std::cout << "help. Othertimes it will just sleep." << std::endl << std::endl;

  std::cout << "Good luck with your new friend also known as" << std::endl;
  std::cout << "\t\t\tTamagotchi" << std::endl;
  std::cout << "\tPress Any Key to Continue";

  std::cin >> n;
}

void tamagotchi::statDisplay() {    // display tamagotchi stats to user
  std::cout << std::setfill(' ') << std::setw(12) << "Happiness";
  std::cout << std::setfill(' ') << std::setw(12) << "Hunger";
  std::cout << std::setfill(' ') << std::setw(12) << "Hygiene";
  std::cout << std::endl;
  std::cout << std::setfill(' ') << std::setw(12) << happiness;
  std::cout << std::setfill(' ') << std::setw(12) << hunger;
  std::cout << std::setfill(' ') << std::setw(12) << hygiene;

  if (sick) {   // only show if tamagotchi is sick
    std::cout << "Tamagotchi is sick!!!" << std::endl;
  }
  if (sleepS) { // only show if tamagotchi is sleeping
    std::cout << "Shh, Tamagotchi is sleeping" << std::endl;
  }
  if (attentionS) { // only show if tamagotchi calls for attention
    std::cout << "HEY! Tamagotchi wants your attention!" << std::endl;
  }
  return;
}

void egg::formDisplay() { // show user current form of tamagotchi
  std::cout << '\f';
  std::cout << "Form: Egg\n";
  return;
}

void baby::formDisplay() { // show user current form of tamagotchi
  std::cout << '\f';
  std::cout << "Form: Baby\n";
  return;
}

void teenager::formDisplay() { // show user current form of tamagotchi
  std::cout << '\f';
  std::cout << "Form: Teenager\n";
  return;
}

void adult::formDisplay() { // show user current form of tamagotchi
  std::cout << '\f';
  std::cout << "Form: Adult\n";
  return;
}

void senior::formDisplay() { // show user current form of tamagotchi
  std::cout << '\f';
  std::cout << "Form: Senior\n";
  return;
}