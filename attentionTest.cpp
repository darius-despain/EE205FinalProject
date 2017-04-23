#include "tamagotchi.h"

using namespace std;

int main() {
	//initialize timer and tamagotchi
	int input = 0;
	tamagotchi test;
	//get user input
	cout << "Choose desired function:\n0: Exit\n1: continue\n2: Light\n3: Attention\n4: Wake\n5: Play\n";
	cin >> input;
	//start loop
	while (input != 0) {
		//run periodical functions
		if (rand() % 9 > 7) {
			test.sleep();
		}
		//select clean or medicine based on previous input
		if (input == 2) test.lightSwitch();
		if (input == 3) test.attention();
		if (input == 4) test.wake();
		if (input == 5) {
			test.play();
			cout << "Any Key to Continue.";
			cin >> input;
		}

		//display results
		test.displayTest();
		//check for user input
		cout << "Choose desired function:\n0: Exit\n1: continue\n2: Light\n3: Attention\n4: Wake\n5: Play\n";
		cin >> input;
	}
	cout << "Thank you for playing\n";

}

void tamagotchi::displayTest() {
	cout << "\f";
	cout << "Light: " << light << endl;
	cout << "Sleep: " << sleepS << endl;
	cout << "Attention: " << attentionS << endl;
	cout << "Happiness: " << happiness << endl;
}
