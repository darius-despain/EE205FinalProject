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

}
