// function definitions for health related functions
// C Monsters
// 4/20/2017 darius, created health.cpp
// 4/26/2017  tyler, updated functions for multiple classes

#include "tamagotchi.h"

void tamagotchi::sickly() { return; }

void egg::sickly() { return; }

void baby::sickly() {         // 20% chance
  if((rand() % 20) == 0) {
    sick = true;
  }
}

void teen::sickly() {     // 10% chance
  if(sleepS == true) return;
  if((rand() % 10) == 0) {
    sick = true;
  }
}

void adult::sickly() {        // 15% chance
  if(sleepS == true) return;
  if((rand() % 15) == 0) {
    sick = true;
  }
}

void senior::sickly() {       // 20% chance
  if(sleepS == true) return;
  if((rand() % 20) == 0) {
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

void tamagotchi::poop() { return; }

void egg::poop() { return; }

void baby::poop() {
  if(sleepS == true) return;
  int n = (rand() % 5);
  if(n == 0){       // 20% chance of poop
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene
  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5 && happiness != MAXHAPPINESS) happiness += 1;
}

void teen::poop() {
  if(sleepS == true) return;
  int n = (rand() % 5);
  if(n == 0){       // 20% chance of poop
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene
  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5 && happiness != MAXHAPPINESS) happiness += 1;
}

void adult::poop() {
  if(sleepS == true) return;
  int n = (rand() % 10);
  if(n == 0){       // 10% chance of poop
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene
  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5 && happiness != MAXHAPPINESS) happiness += 1;
}

void senior::poop() {
  if(sleepS == true) return;
  int n = (rand() % 5);
  if(n == 0){       // 20% chance of poop
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene
  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5 && happiness != MAXHAPPINESS) happiness += 1;
}

// increase hygiene value by cleaning up
void tamagotchi::clean(){
  if(hygiene != MAXHYG ) happiness += 2;
  if(happiness >= MAXHAPPINESS) happiness = MAXHAPPINESS;
  hygiene = MAXHYG;
}
