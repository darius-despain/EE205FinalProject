// food related functions for tamagotchi class
// Tyler Butuyan
// tbutuyan
// C Monsters
// 4/16/2017

#include "tamagotchi.h"

void tamagotchi::digest() {
    --hunger;
    if (hunger < 0) {
	happiness -= (rand() % 2);
    }
    return;
}

bool tamagotchi::feed(std::string food) {
    // tamagotchi refuse to eat
    if (hunger >= 4) {
        return false;
    }
    // tamagotchi eats a meal
    if (food == "meal") {
        hunger += 2;
        if (hunger > 4) {
            weight += (hunger - 4);
        }
	happiness += (rand() % 2);
  if(happiness > 4) happiness = 4;
        attentionS = false;
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
	attentionS = false;
        return true;
    }
    misbehave = true;
    return false;
}

void tamagotchi::discipline() {
    happiness -= (rand() % 2) + 1;

    if (misbehave && hunger < 4) {
            disciplineS += (rand() % 4) + 1;
            return;
    }
    if (misbehave && happiness != 4) {
            disciplineS += (rand() % 4) + 1;
            return;
    }
    if (attentionS && disciplineS < (rand() % age)) {
        disciplineS += (rand() % 4) + 1;
        attentionS = false;
        return;
    }
}

int tamagotchi::form() {
    if (age < 0) { return -1; }
    else if (age < 1) {          // egg form
        formS = 0;
    }
    else if (age < 5) {          // baby form
        formS = 1;
    }
    else if (age < 17) {    // child form
        formS = 2;
    }
    else if (age > 17) {    // adult form
        if (disciplineS > age && happiness >= 4) {    // excellent form
            formS = 3;
        }
        else if (disciplineS > age / 2 && happiness >= 2) {    // average form
            formS = 4;
        }
        else if (happiness < 2) {      // bad form
            formS = 5;
        }
    }
    return formS;
}
