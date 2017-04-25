#include "tamagotchi.h"

int main(){

  //initialize timer and tamagotchi
  tamagotchi a;
  //get user input
  int input = 0;
  std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Light\n3: Clean\n4: Medicine\n5: Discipline\n6: Play\n7: Continue\n8: Exit\n";
  std::cin >> input;
  //start loop
  while(input != 8 && a.getRunS() != true){
    //run periodic functions
    a.digest();
    a.sickly();
    a.attention();
    a.sleep();
    a.poop();
    a.form();

    //select clean or medicine based on current input
    switch(input){
      case(0): a.feed("meal"); break;
      case(1): a.feed("snack"); break;
      case(2): a.lightSwitch(); break;
      case(3): a.clean(); break;
      case(4): a.medicine(); break;
      case(5): a.discipline(); break;
      case(6): a.play(); break;
      default: break;
    }
    //display results
    a.statDisplay();
    /////////////////other displays?????
    //get next user input
    std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Light\n3: Clean\n4: Medicine\n5: Discipline\n6: Play\n7: Continue\n8: Exit\n";
    std::cin >> input;
  }
  //end Game
  if(a.getRunS() == true) std::cout << "Tamagotchi has Run!\n";
  std::cout << "Thank You For Playing!!\n\f";
}
