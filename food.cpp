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
        if (hunger > 0)
			hunger--;
    }
    if (hunger < (MAXHUNGER / 4)) {     // too hungry results in weight loss
        weight--;
        if(happiness > 0) 
			happiness--;
    }
}

void teen::digest() {   // percentage to get hungry
    if ((rand() % 2) == 0) {
        if (hunger > 0)
			hunger--;
    }
    if (hunger < (MAXHUNGER / 4)) {     // too hungry results in weight loss
        weight--;
        if(happiness > 0) 
			happiness--;
    }
}

void adult::digest() {   // percentage to get hungry
    if ((rand() % 4) == 0) {
        if (hunger > 0)
			hunger--;
    }
    if (hunger < (MAXHUNGER / 4)) {     // too hungry results in weight loss
        weight--;
        if(happiness > 0) 
			happiness--;
    }
}

void senior::digest() {   // percentage to get hungry
    if ((rand() % 6) == 0) {
        if (hunger > 0)
			hunger--;
    }
    if (hunger < (MAXHUNGER / 4)) {     // too hungry results in weight loss
        weight--;
        if(happiness > 0) 
			happiness--;
    }
}

void tamagotchi::feed(std::string food) {
    if (food == "meal") {   // if feeding tamagotchi a meal
        hunger = MAXHUNGER;
        if(happiness < MAXHAPPINESS) 
			happiness++;
        if (rand() % 10 == 0)  // chance of gaining weight
            weight++;
    }
    if (food == "snack") {  // if feeding tamagotchi a snack
        if(hunger < MAXHUNGER) 
			hunger += (MAXHUNGER / 5);
        if(happiness < MAXHAPPINESS) 
			happiness++;
        if (rand() % 10 == 0) {  // chance of gaining weight
            weight++;
        }
    }
    if (hunger >= MAXHUNGER) {  // overfeeding results in weight gain
        weight++;
        hunger = MAXHUNGER;
    }
}