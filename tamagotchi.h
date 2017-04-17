
// Header file for tamagotchi class
// Tyler Butuyan
// tbutuyan
// C Monsters
// 4/16/2017

class tamagotchi{
private:
    int happiness;      // 1 - 4
    int health;         // 1 - MAXHEALTH
    int hunger;         // 1 - 4
    int age;            // 0 - MAXAGE
    int weight;         // 1 - MAXWEIGHT
    int discipline;     // 1 - MAXDISC
    int sick;           // 0 or 1
    int sleep;          // 0 or 1
    int hygiene;        // 1 - MAXHYG
public:
    int hunger();       // decrease hunger value by 1
    int sick();         // set sick variable to 1
    int feed();         // increase hunger value, keep track of overfeeding
    int light();        // set to 1 if tamagotchi awake, if 1 and sleeping decrease happiness
    int drop();         // decrease hygiene value, lower than threshold decrease health by 1
    int hygiene();      // increase hygiene value
    int play();         // increase happiness by 1 if won, decrease if lost
    int medicine();     // set sick variable to 0
    int attention();    // send notification to user
    int discipline();   // increase discipline variable 
};