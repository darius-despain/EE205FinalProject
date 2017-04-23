// test driver for food.cp functions
// tyler butuyan
// tbutuyan
// C Monsters
// 4/20/2017

#include "tamagotchi.h"

int main() {
	std::cout << '\f';
	tamagotchi t;
	int input = 1;
	t.setAge(0);

	//start loop
	while (input != 0) {
		// test feed function
		if (input == 2) {
			std::cout << "Feed:\n1: Meal\n2: Snack\n";
			std::cin >> input;
			if (input == 1) { 
				std::cout << "Fed: "
					<< t.feed("meal") << std::endl; 
			}
	
			if (input == 2) { 
				std::cout << "Fed: "
					<< t.feed("snack") << std::endl; 
			}
			input = 2;
		}
		// test discipline function
		if (input == 3) {
			std::cout << "Call for help? (1) otherwise (0): ";
			std::cin >> input;
			if (input == 1) {
				t.setAttention(true);
				t.discipline(); 
			}
			else if (input == 0) {
				t.setAttention(false);
				std::cout << "Is tamagotchi misbehaving? (1) otherwise (0): ";
				std::cin >> input;
				if (input == 1) {
					t.setMisbehave(true);
				}
				else {
					t.setMisbehave(false);
				}
			}
			t.discipline();
			input = 3;
		}
		// test form function
		if (input == 4) {
			std::cout << "Please Input Age: ";
			std::cin >> input;
			t.setAge(input);
			t.form();
			input = 4;
		}
		//check for user input
		std::cout << "Choose desired function:\n0: Exit\n1: Continue\n2: Feed\n3: Discipline\n4: Form\n";
		std::cin >> input;
		t.digest();
		t.displayTest();
	}
}

void tamagotchi::displayTest() {
	std::cout << "\f";
	std::cout << "hunger: " << hunger << std::endl;
	std::cout << "discipline: " << disciplineS << std::endl;
	std::cout << "form: " << form() << std::endl;
	std::cout << "happiness: " << happiness << std::endl;
}
