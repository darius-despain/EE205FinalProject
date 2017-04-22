#include "tamagotchi.h"

// has a 10% chance of getting sick
void tamagotchi::sick(){
  int n = rand() % 10;
  if(n == 0){
    sick = true;
  }
}

// has a 40% chance of getting healthy
void tamagotchi::medicine(){
  int n = rand() % 10;
  if(n <= 3){
    sick = false;
  }
}

// increase hygiene value by cleaning up
void tamagotchi::clean(){
  hygiene = MAXHYG;
}

// check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
void tamagotchi::poop(){
  // check if it needs to poop
  if(){
    // if it does, increase number of poop on screen
    hygiene++;
  }  
  // have a chance of reducing happiness proportional to hygiene
  int n = rand() % 10;
  if(n <= hygiene && hygiene != 0){
    happiness -= 1;
}
