#include "tamagotchi.h"

using namespace std;

int main(){
  //initialize timer and tamagotchi
  int input = 0;
  tamagotchi test;
  //get user input
  cout << "Choose desired function:\n0: Exit\n1: continue\n2: Medicine\n3: Clean\n";
  cin >> input;
  //start loop
  while(input != 0){
    //run poop and sick periodically
    test.sickly();
    test.poop();
    //select clean or medicine based on previous input
    if(input == 2) test.medicine();
    if(input == 3) test.clean();
    //display results
    test.displayTest();
    //check for user input
    cout << "Choose desired function:\n0: Exit\n1: continue\n2: Medicine\n3: Clean\n";
    cin >> input;
  }
  cout << "Thank you for playing\n";

}

void tamagotchi::displayTest(){

  cout << "\f";
  cout << "Sick: " << sick << endl;
  cout << "hygiene: " << hygiene << endl;
  cout << "happiness: " << happiness << endl;
}
