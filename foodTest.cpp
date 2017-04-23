// test driver for food.cp functions
// tyler butuyan
// tbutuyan
// C Monsters
// 4/20/2017

#include <tamagotchi.h>

int main() {
    tamagotchi t;
    
	//get user input
	std::cout << "Choose desired function:\n0: Exit\n1: Digest\n2: Feed\n3: Discipline\n4: Form";
	std::cin >> input;
	//start loop
	while (input != 0) {
		if (input == 1) { t.digest(); }
		if (input == 2) {
			std::cout << "Feed:\n1: Meal\n 2: Snack\n" << std::endl;
			std::cin >> input;
			if (input == 1) { t.feed("meal") }
			if (input == 2) { t.feed("snack") }
			input = 2;
		}
		if (input == 3) {
			std::cout << "" << std::endl;
		}
		if (input == 4) {
			std::cout << "Choose a number between 0 and 20" << std::endl;
			std::cin >> input;
			std::cout << t.form(input) << std::endl;
			input = 4;
		}
		//display results
		test.displayTest();
		//check for user input
		std::cout << "Choose desired function:\n0: Exit\n1: continue\n2: Medicine\n3: Clean\n";
		std::cin >> input;
	}
}

void tamagotchi::displayTest() {
	std::cout << "\f";
	std::cout << "hunger: " << hunger << std::endl;
	std::cout << "discipline: " << disciplineS << std::endl;
	std::cout << "form: " << formS << std::endl;
}