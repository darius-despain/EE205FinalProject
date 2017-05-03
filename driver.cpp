#include "tamagotchi.h"

int main(){

  //initialize timer and tamagotchi of weight 3
  tamagotchi a(3); //initialize tamagotchi of weight 3
  egg b; //initialize egg using tamagotchi above


  //display the main menu
  b.welcomeDisplay();
  //get user input
  int input = 0;
  std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Clean\n3: Medicine\n4: Play\n5: Continue\n6: Exit\n";
  std::cin >> input;
  //start loop
  while(input != 6 && b.getRunS() != true && b.getEvoS() != true){

    b.evolve();

    //display results
    b.formDisplay();
    b.statDisplay();

    //get next user input
    std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Clean\n3: Medicine\n4: Play\n5: Continue\n6: Exit\n";
    std::cin >> input;
  }
  baby c;
  if(b.getEvoS() == true){ //if the tamagotchi just evolved

    while(input != 6 && c.getRunS() != true && c.getEvoS() != true){
      //display results
      c.formDisplay();
      c.statDisplay();

      //get next user input
	  std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Clean\n3: Medicine\n4: Play\n5: Continue\n6: Exit\n";
      std::cin >> input;

      //run periodic functions
      c.digest();
      c.sickly();
      c.attention();
      c.sleep();
      c.poop();
      c.evolve();
      c.run();

      //select clean or medicine based on current input
      switch(input){
        case(0): c.feed("snack"); break;
        case(1): c.feed("meal"); break;
        case(2): c.clean(); break;
        case(3): c.medicine(); break;
        case(4): c.play(); break;
        default: break;
      }
    }
  }
  teen d;
  if(c.getEvoS() == true){ //if the tamagotchi just evolved

    while(input != 6 && d.getRunS() != true && d.getEvoS() != true){
      //display results
      d.formDisplay();
      d.statDisplay();
          //get next user input
	  std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Clean\n3: Medicine\n4: Play\n5: Continue\n6: Exit\n";
      std::cin >> input;

      //run periodic functions
      d.digest();
      d.sickly();
      d.attention();
      d.sleep();
      d.poop();
      d.evolve();
      c.run();

      //select clean or medicine based on current input
      switch(input){
        case(0): d.feed("snack"); break;
        case(1): d.feed("meal"); break;
        case(2): d.clean(); break;
        case(3): d.medicine(); break;
        case(4): d.play(); break;
        default: break;
      }
    }
  }
  adult e;
  if(d.getEvoS() == true){ //if the tamagotchi just evolved

    while(input != 6 && e.getRunS() != true && e.getEvoS() != true){
      //display results
      e.formDisplay();
      e.statDisplay();

      //get next user input
	  std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Clean\n3: Medicine\n4: Play\n5: Continue\n6: Exit\n";
      std::cin >> input;

      //run periodic functions
      e.digest();
      e.sickly();
      e.attention();
      e.sleep();
      e.poop();
      e.evolve();
      e.run();

      //select clean or medicine based on current input
      switch(input){
        case(0): e.feed("snack"); break;
        case(1): e.feed("meal"); break;
        case(2): e.clean(); break;
        case(3): e.medicine(); break;
        case(4): e.play(); break;
        default: break;
      }
    }
  }
  senior f;
  if(e.getEvoS() == true){ //if the tamagotchi just evolved

    while(input != 6 && f.getRunS() != true && f.getEvoS() != true){
      //display results
      f.formDisplay();
      f.statDisplay();

      //get next user input
	  std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Clean\n3: Medicine\n4: Play\n5: Continue\n6: Exit\n";
      std::cin >> input;

      //run periodic functions
      f.digest();
      f.sickly();
      f.attention();
      f.sleep();
      f.poop();
      f.evolve();
      f.run();

      //select clean or medicine based on current input
      switch(input){
        case(0): f.feed("snack"); break;
        case(1): f.feed("meal"); break;
        case(2): f.clean(); break;
        case(3): f.medicine(); break;
        case(4): f.play(); break;
        default: break;
      }
    }
  }
  //end Game
  if(a.getRunS() == true || b.getRunS() == true || c.getRunS() == true
  || d.getRunS() == true || e.getRunS() == true || f.getRunS() == true) {
    std::cout << "Tamagotchi Ran Away!\n";
  }
  std::cout << "Thank You For Playing!!\n\f";
}
