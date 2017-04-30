// Header file for tamagotchi class
// Tyler Butuyan
// tbutuyan
// C Monsters
// 4/16/2017

#include <string>
#include <cstdlib>
#include <iostream>

#define MAXHYG 10
#define MAXHUNGER 4

class tamagotchi{ //base class for tamagotchi
protected:
    int attenCount;     //attention counter
    int happiness;      // 0 - 4
    int hunger;         // 0 - 4
    int weight;         // 0 - MAXWEIGHT
    bool sick;        // true or false
    bool sleepS;      // true or false
    bool attentionS;     // true or false
    int hygiene;        // 0 - MAXHYG
    int runCount;     //to track number of loops happiness is at 0 before it runs
    bool runS;        //flag for if tamagotchi is running
    bool evoS;       //flag for if it evolves
    int formS;      //keeps track of current form of Tamagotchi
public:
  // main constructor
    tamagotchi(int w): attenCount(0), happiness(4), hunger(4), weight(w), sick(false), sleepS(false), attentionS(false), hygiene(MAXHYG), runCount(0), runS(false), formS(0){}

    //periodic functions
	virtual void digest();      // decrease hunger value by 1
	virtual void sickly();        // has a 10% chance of getting sick
    virtual bool attention();   // set attention variable to 1, return true if notification sent
    virtual void sleep();       // set sleep variable to 1
    virtual void poop();        // check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
    virtual void evolve();         // set the form of tamagotchi
    virtual void run();     //tests if tamagotchi needs to run

    //user controlled functions
    void feed(std::string food);        // increase hunger value, keep track of overfeeding
    void clean();     // increase hygiene value by cleaning up
    void medicine();    // set sick variable to 0
    void play();        // increase happiness to max if won, increase by 1 if lost
    void resetAttention(); //resets attention to false and attention counter to 0

    //display functions
    void welcomeDisplay();
    void statDisplay(); //displays statistics to user
    virtual void formDisplay() {}; //displays the tomagotchi at current form, also displays if it is sleeping and emotions
    void displayTest(); //function for displaying the various test drivers. Not for use in main program

    //getters and setters
    void setAttentionS(bool v) { attentionS = v; }

    int getWeight(){ return weight;}
    bool getRunS(){ return runS;}
    bool getEvoS(){ return evoS;}
};

class egg: public tamagotchi {
private:
  int eggCount;
public:
  egg(): tamagotchi(getWeight()), eggCount(0){}
  void digest();      // decrease hunger value by 1
  void sickly();      // has a 10% chance of getting sick
  bool attention();   // set attention variable to 1, return true if notification sent
  void sleep();       // set sleep variable to 1
  void poop();        // check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
  void run();     //tests if tamagotchi needs to run
  void formDisplay(); //displays the tomagotchi at current form, also displays if it is sleeping and emotions
  void evolve();         // set the form of tamagotchi
};

class baby: public tamagotchi{
public:
  baby(): tamagotchi(getWeight()){}
  void digest();      // decrease hunger value by 1
  void sickly();        // has a 10% chance of getting sick
  bool attention();   // set attention variable to 1, return true if notification sent
  void sleep();       // set sleep variable to 1
  void poop();        // check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
  void run();     //tests if tamagotchi needs to run
  void formDisplay(); //displays the tomagotchi at current form, also displays if it is sleeping and emotions
  void evolve();         // set the form of tamagotchi

};

class teen: public tamagotchi{
public:
  teen(): tamagotchi(getWeight()){}
  void digest();      // decrease hunger value by 1
  void sickly();        // has a 10% chance of getting sick
  bool attention();   // set attention variable to 1, return true if notification sent
  void sleep();       // set sleep variable to 1
  void poop();        // check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
  void run();     //tests if tamagotchi needs to run
  void formDisplay(); //displays the tomagotchi at current form, also displays if it is sleeping and emotions
  void evolve();         // set the form of tamagotchi
};

class adult: public tamagotchi{
public:
  adult(): tamagotchi(getWeight()){}
  void digest();      // decrease hunger value by 1
  void sickly();        // has a 10% chance of getting sick
  bool attention();   // set attention variable to 1, return true if notification sent
  void sleep();       // set sleep variable to 1
  void poop();        // check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
  void run();     //tests if tamagotchi needs to run
  void formDisplay(); //displays the tomagotchi at current form, also displays if it is sleeping and emotions
  void evolve();         // set the form of tamagotchi
};

class senior: public tamagotchi{
public:
  senior(): tamagotchi(getWeight()){}
  void digest();      // decrease hunger value by 1
  void sickly();        // has a 10% chance of getting sick
  bool attention();   // set attention variable to 1, return true if notification sent
  void sleep();       // set sleep variable to 1
  void poop();        // check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
  void run();     //tests if tamagotchi needs to run
  void formDisplay(); //displays the tomagotchi at current form, also displays if it is sleeping and emotions
  void evolve();         // set the form of tamagotchi
};
