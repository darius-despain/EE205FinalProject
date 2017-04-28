#include "tamagotchi.h"

int main(){

  //initialize timer and tamagotchi of weight 3
  tamagotchi a(3); //initialize tamagotchi of weight 3
  egg b; //initialize egg using tamagotchi above


  //display the main menu
  b.welcomeDisplay();
  //get user input
  int input = 0;
  std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Light\n3: Clean\n4: Medicine\n5: Discipline\n6: Play\n7: Continue\n8: Exit\n";
  std::cin >> input;
  //start loop
  while(input != 8 && b.getRunS() != true && b.getEvoS() != true){

    b.evolve();

    //display results
    b.formDisplay();
    b.statDisplay();

    //get next user input
    std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Light\n3: Clean\n4: Medicine\n5: Discipline\n6: Play\n7: Continue\n8: Exit\n";
    std::cin >> input;
  }
  if(b.getEvoS() == true){ //if the tamagotchi just evolved
    baby c;
    while(input != 8 && c.getRunS() != true && c.getEvoS() != true){
      //display results
      c.formDisplay();
      c.statDisplay();

      //get next user input
      std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Light\n3: Clean\n4: Medicine\n5: Discipline\n6: Play\n7: Continue\n8: Exit\n";
      std::cin >> input;

      //run periodic functions
      c.digest();
      c.sickly();
      c.attention();
      c.sleep();
      c.poop();
      c.form();
      c.evolve();

      //select clean or medicine based on current input
      switch(input){
        case(0): c.feed("meal"); break;
        case(1): c.feed("snack"); break;
        case(2): c.lightSwitch(); break;
        case(3): c.clean(); break;
        case(4): c.medicine(); break;
        case(5): c.discipline(); break;
        case(6): c.play(); break;
        default: break;
      }
    }
  }
  if(c.getEvoS() == true){ //if the tamagotchi just evolved
    teenager d;
    while(input != 8 && d.getRunS() != true && d.getEvoS() != true){
      //display results
      d.formDisplay();
      d.statDisplay();
          //get next user input
      std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Light\n3: Clean\n4: Medicine\n5: Discipline\n6: Play\n7: Continue\n8: Exit\n";
      std::cin >> input;

      //run periodic functions
      d.digest();
      d.sickly();
      d.attention();
      d.sleep();
      d.poop();
      d.form();
      d.evolve();

      //select clean or medicine based on current input
      switch(input){
        case(0): d.feed("meal"); break;
        case(1): d.feed("snack"); break;
        case(2): d.lightSwitch(); break;
        case(3): d.clean(); break;
        case(4): d.medicine(); break;
        case(5): d.discipline(); break;
        case(6): d.play(); break;
        default: break;
      }
    }
  if(d.getEvoS() == true){ //if the tamagotchi just evolved
    adult e;
    while(input != 8 && e.getRunS() != true && e.getEvoS() != true){
      //display results
      e.formDisplay();
      e.statDisplay();

      //get next user input
      std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Light\n3: Clean\n4: Medicine\n5: Discipline\n6: Play\n7: Continue\n8: Exit\n";
      std::cin >> input;

      //run periodic functions
      e.digest();
      e.sickly();
      e.attention();
      e.sleep();
      e.poop();
      e.form();
      e.evolve();

      //select clean or medicine based on current input
      switch(input){
        case(0): e.feed("meal"); break;
        case(1): e.feed("snack"); break;
        case(2): e.lightSwitch(); break;
        case(3): e.clean(); break;
        case(4): e.medicine(); break;
        case(5): e.discipline(); break;
        case(6): e.play(); break;
        default: break;
      }
    }
  if(e.getEvoS() == true){ //if the tamagotchi just evolved
    senior f;
    while(input != 8 && f.getRunS() != true && f.getEvoS() != true){
      //display results
      f.formDisplay();
      f.statDisplay();

      //get next user input
      std::cout << "Choose desired function:\n0: Feed Snack\n1: Feed Meal\n2: Light\n3: Clean\n4: Medicine\n5: Discipline\n6: Play\n7: Continue\n8: Exit\n";
      std::cin >> input;

      //run periodic functions
      f.digest();
      f.sickly();
      f.attention();
      f.sleep();
      f.poop();
      f.form();
      f.evolve();

      //select clean or medicine based on current input
      switch(input){
        case(0): f.feed("meal"); break;
        case(1): f.feed("snack"); break;
        case(2): f.lightSwitch(); break;
        case(3): f.clean(); break;
        case(4): f.medicine(); break;
        case(5): f.discipline(); break;
        case(6): f.play(); break;
        default: break;
        }
    }
  //end Game
  if(a.getRunS() == true || b.getRunS() == true || c.getRunS() == true ||
    d.getRunS() == true || e.getRunS() == true || f.getRunS() == true) {
    std::cout << "Tamagotchi has Run!\n";
  }
  std::cout << "Thank You For Playing!!\n\f";
}
