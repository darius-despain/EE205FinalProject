//kona canaday
//4/20/17
//attention.cpp
//light sleep play attention

#include "tamagotchi.h"

using namespace std;

/*
void tamagotchi::lightSwitch(){
  if(light == false){ //turn light on
  	light = true;
    cout << "You have turned the light on.\n";
    if(light == true && sleepS == true){ //if light is on while tamagotchi is asleep
      //cout << "The tamagotchi is asleep!\n";
      happiness--;
    }
  }
  if(light == true) //turn light off
    light = false;
}
*/

bool tamagotchi::attention(){ //sets to need attention
  attentionS = true;
  happiness--;

}

void tamagotchi::sleep(){ //set tamagotchi to sleep
  sleepS = true;
}

void tamagotchi::play(){ //5 rounds of guessing. win == +1 happiness
  string choice;
  int score = 0;

  for(int  i = 0; i < 5; i++){
    cout << "Will the tamagotchi turn left or right: ";
    cin >> choice;

    int n = rand()%2; //0 is left and 1 is right

    if(choice == "left" && n == 0){
      cout << "You guessed right!\n";
      score++;
    }
    else if(choice == "right" && n == 1){
      cout << "You guessed right!\n";
      score++;
    }
    else
      cout << "You guessed wrong!\n";
  }
  if(score <= 3){
    cout << "Congratulations! You won the game!\n";
    happiness = 4; //if you win happiness goes to max
  }
  else
    cout << "Sorry, you lost the game.\n";
}

void tamagotchi::wake() {
	if (light == false) light = true;
	sleepS = false;
}
