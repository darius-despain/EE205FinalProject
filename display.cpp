#include "tamagotchi.h"

using namespace std;
void tamagotchi::statDisplay() {//displays statistics to user
  cout << "\f";
  cout << "form: " << form() << endl << endl;
	cout << "hunger: " << hunger << endl;
  cout << "Sick: " << sick << endl;
  cout << "hygiene: " << hygiene << endl;
  cout << "happiness: " << happiness << endl << endl;
	cout << "discipline: " << disciplineS << endl;
  cout << "Light: " << light << endl;
	cout << "Sleep: " << sleepS << endl;
	cout << "Attention: " << attentionS << endl << endl;
  return;
}
void tamagotchi::mainDisplay() {//displays the "Game Window" including all elements. Considers light and other background conditions
  return;
}
void tamagotchi::formDisplay() {//displays the tomagotchi at current form, also displays if it is sleeping and emotions
  return;
}
void tamagotchi::poopDisplay() {//displays poop on the screen at empty spot
  return;
}
