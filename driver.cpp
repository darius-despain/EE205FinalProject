#include "tamagotchi.h"

int main(){

  //initialize timer and tamagotchi
  tamagotchi a;
  //get user input
  int input = 0;
  std::cout << "Choose desired function:\n0: Feed\n1: Light\n2: Clean\n3: Medicine\n4: Discipline\n5: Play\n6: Continue\n7: Exit\n";
  std::cin >> input;
  //start loop
  while(input != 7){
    //run periodic functions
    a.hungry();
    a.sickly();
    a.attention();
    a.sleep();
    a.poop();
    a.form();

    //select clean or medicine based on current input
    switch(a){
      case(0): a.feed(); break;
      case(1): a.lightSwitch(); break;
      case(2): a.clean(); break;
      case(3): a.medicine(); break;
      case(4): a.discipline(); break;
      case(5): a.play(); break;
      default: break;
    }
    //display results
    a.statDisplay();
    /////////////////other displays?????
    //get next user input
    std::cout << "Choose desired function:\n0: Feed\n1: Light\n2: Clean\n3: Medicine\n4: Discipline\n5: Play\n6: Continue\n7: Exit\n";
    std::cin >> input;
  }
  //end Game
  std::cout << "Thank You For Playing!!\n\f";
}
