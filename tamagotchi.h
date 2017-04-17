
// Header file for tamagotchi class
// Tyler Butuyan
// tbutuyan
// C Monsters
// 4/16/2017

class tamagotchi{
private:
    int happiness;      // 0 - 4
    int health;         // 0 - MAXHEALTH
    int hunger;         // 0 - 4
    int age;            // 0 - MAXAGE
    int weight;         // 0 - MAXWEIGHT
    int discipline;     // 0 - MAXDISC
    int sick;           // 0 or 1
    int sleep;          // 0 or 1
    int hygiene;        // 0 - MAXHYG
    int form;           // 0 - MAXFORM
public:
    void hunger();       // decrease hunger value by 1
    void sick();         // set sick variable to 1
    void feed();         // increase hunger value, keep track of overfeeding
    void light();        // set to 1 if tamagotchi awake, if 1 and sleeping decrease happiness
    void poop();         // decrease hygiene value, lower than threshold decrease health by 1
    void hygiene();      // increase hygiene value
    void play();         // increase happiness by 1 if won, decrease if lost
    void medicine();     // set sick variable to 0
    void attention();    // send notification to user
    void discipline();   // increase discipline variable 
    void sleep();        // set sleep variable to 1
};