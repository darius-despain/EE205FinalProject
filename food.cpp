// food related functions for tamagotchi class
// Tyler Butuyan
// tbutuyan
// C Monsters
// 4/16/2017

#include "tamagotchi.h"

void tamagotchi::hunger() {
    --hunger;
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
        return true;
    }
    // tamagotchi eats a snack
    if (food == "snack") {
        ++hunger;
        if (hunger > 4) {
            weight += (hunger - 4);
        }
        return true;
    }
    return false;
}

void tamagotchi::discipline() {
    if (attention && hunger >= 4) {
            discipline += 1;
            return;
    }
    if (attention && health >= MAXHEALTH) {
            discipline += 1;
            return;
    }
    if (attention && (discipline / age) < 2) {
        discipline += 1;
        return;
    }
    else {
        happiness -= 1;
        return;
    }
}

int tamagotchi::form() {
    if (age < 1) {          // egg form
        form = 0;
    }
    if (age < 5) {          // baby form
        form = 1;
    }
    else if (age < 10) {    // child form
        form = 2;
    }
    else if (age > 17) {    // adult form
        if (hunger == 4 && happiness == 4) {    // excellent form
            form = 3;
        }
        if (hunger >= 2 && happiness >= 2) {    // average form
            form = 4;
        }
        if (hunger < 2 && happiness < 2) {      // bad form
            form = 5;
        }
    }
    return form;
}