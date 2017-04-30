// food related functions for tamagotchi class
// Tyler Butuyan
// tbutuyan
// C Monsters
// 4/16/2017 created the function definitions
// 4/26/2017 updated functions for inheritence

#include "tamagotchi.h"

void tamagotchi::digest() { return; }

void egg::digest() { return; }

void baby::digest() {   // percentage to get hungry
    if ((rand() % 5) == 0) {
        hunger--;
    }
    if (hunger < (MAXHUNGER / 4)) {     // too hungry results in weight loss
        weight--;
        happiness--;
    }
}

void teen::digest() {   // percentage to get hungry
    if ((rand() % 2) == 0) {
        hunger--;
    }
    if (hunger < (MAXHUNGER / 4)) {     // too hungry results in weight loss
        weight--;
        happiness--;
    }
}

void adult::digest() {   // percentage to get hungry
    if ((rand() % 4) == 0) {
        hunger--;
    }
    if (hunger < (MAXHUNGER / 4)) {     // too hungry results in weight loss
        weight--;
        happiness--;
    }
}

void senior::digest() {   // percentage to get hungry
    if ((rand() % 6) == 0) {
        hunger--;
    }
    if (hunger < (MAXHUNGER / 4)) {     // too hungry results in weight loss
        weight--;
        happiness--;
    }
}

void tamagotchi::feed(std::string food) {
    if (food == "meal") {   // if feeding tamagotchi a meal
        hunger = MAXHUNGER;
        happiness++;
        if (rand() % 10 == 0) { // chance of gaining weight
            weight++;
        }
    }
    if (food == "snack") {  // if feeding tamagotchi a snack
        hunger += MAXHUNGER / 10;
        happiness++;
        if (rand() % 10 == 0) {  // chance of gaining weight
            weight++;
        }
    }
    if (hunger >= MAXHUNGER) {  // overfeeding results in weight gain
        weight++;
    }
}

/*
bool tamagotchi::feed(std::string food) {
    // tamagotchi eats a meal
    if (food == "meal") {
        hunger += 2;
        if (hunger > 4) {
            weight += (hunger - 4);
        }
	happiness += (rand() % 2);
    }

  if(happiness > 4) { happiness = 4;
        return true;
    }

    // tamagotchi eats a snack
    if (food == "snack") {
        ++hunger;
        if (hunger > 4) {
            weight += (hunger - 4);
        }
	happiness += (rand() % 2);
  if(happiness > 4) happiness = 4;

        return true;
    }
    return false;
}
*/
