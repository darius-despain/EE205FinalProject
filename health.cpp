#include "tamagotchi.h"

// has a 10% chance of getting sick
void tamagotchi::sickly(){
  int n = rand() % 10;
  if(n == 0){
    sick = true;
  }

}

// has a 40% chance of getting healthy
void tamagotchi::medicine(){
  int n = rand() % 10;
  if(n <= 8){
    sick = false;
  }
}

// increase hygiene value by cleaning up
void tamagotchi::clean(){
  if(hygiene != MAXHYG) happiness += 2;
  hygiene = MAXHYG;
}

// check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
void tamagotchi::poop(){
  // check if it needs to poop
  int n = rand() % 10;
  if(n == 0){
    // if it does, increase number of poop on screen
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene

  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5) happiness += 1; 
}
