// food related functions for tamagotchi class
// Tyler Butuyan
// tbutuyan
// C Monsters
// 4/16/2017

#include "tamagotchi.h"

void tamagotchi::digest() {
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
        attention = false;
        return true;
    }
    // tamagotchi eats a snack
    if (food == "snack") {
        ++hunger;
        if (hunger > 4) {
            weight += (hunger - 4);
        }
		attention = false;
        return true;
    }
    return false;
}

void tamagotchi::discipline() {
    if (attention && hunger >= 4) {
            disciplineS += 1;
            attention = false;
            return;
    }
    if (attention && health >= MAXHEALTH) {
            disciplineS += 1;
            attention = false;
            return;
    }
    if (attention && (disciplineS / age) < 2) {
        disciplineS += 1;
        attention = false;
        return;
    }
    else {      // discipline for no reason
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