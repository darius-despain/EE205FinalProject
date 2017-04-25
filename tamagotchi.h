// Header file for tamagotchi class
// Tyler Butuyan
// tbutuyan
// C Monsters
// 4/16/2017

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

#define MAXHEALTH 10
#define MAXAGE 20
#define MAXWEIGHT 20
#define MAXDISC 15
#define MAXHYG 10

class tamagotchi{
private:
    int happiness;      // 0 - 4
    int health;         // 0 - MAXHEALTH
    int hunger;         // 0 - 4
    int age;            // 0 - MAXAGE
    int weight;         // 0 - MAXWEIGHT
    int disciplineS;     // 0 - MAXDISC
    bool sick;      // true or false
    bool sleepS;     // true or false
    bool attentionS;     // true or false
    int hygiene;        // 0 - MAXHYG
    int formS;           // 0 - 5
    bool light;         // true or false; current light setting
    bool misbehave;	// true if tamagotchi doesnt eat when hungry or play when sad
    int runCount;     //to track number of loops happiness is at 0 before it runs
    bool runS;        //flag for if tamagotchi is running
    clock_t clk;
public:
    tamagotchi()
        :happiness(4), health(MAXHEALTH), hunger(4), age(0), weight(MAXWEIGHT/2),
         disciplineS(0), hygiene(MAXHYG), clk(clock()), sick(false) {}

    //periodic functions
    void digest();      // decrease hunger value by 1
    void sickly();        // has a 10% chance of getting sick
    bool attention();   // set attention variable to 1, return true if notification sent
    void sleep();       // set sleep variable to 1
    void poop();        // check if needs to poop, decrease hygiene value, lower than threshold decrease health by 1
    int form();         // set the form of tamagotchi
	  void wake();		// tamagotchi will wake up and turn on light
    void run();     //tests if tamagotchi needs to run

    //user controlled functions
    bool feed(std::string food);        // increase hunger value, keep track of overfeeding
    void lightSwitch();  // set to 1 if tamagotchi awake, if 1 and sleeping decrease happiness
    void clean();     // increase hygiene value by cleaning up
    void medicine();    // set sick variable to 0
    void discipline();  // increase discipline variable
    void play();        // increase happiness by 1 if won, decrease if lost

    //display functions
    void statDisplay(); //displays statistics to user
    void mainDisplay(); //displays the "Game Window" including all elements. Considers light and other background conditions
    void formDisplay(); //displays the tomagotchi at current form, also displays if it is sleeping and emotions
    void poopDisplay(); //displays poop on the screen at empty spot
    void displayTest(); //function for displaying the various test drivers. Not for use in main program

    //getters and setters
    void setAttention(bool v) { attentionS = v; }
    void setAge(int v) { age = v; }
    void setMisbehave(bool v) { misbehave = v; }
    void setClk(clock_t t){clk = t; }

    bool getRunS(){ return runS;}
    clock_t getClk(){ return clk;}

};
