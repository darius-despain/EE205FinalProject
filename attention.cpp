//kona canaday
//4/20/17
//attention.cpp
//light sleep play attention

#include "tamagotchi.h"

using namespace std;

void tamagotchi::resetAttention(){ //reset attention and attention counter
  attentionS = false;
  attenCount = 0;
}

bool tamagotchi::attention(){ //default attention
  /*if(attentionS == true){ //if needs attention +1 to counter
    attenCount++;
    if(attenCount >= 4) //counter = 4+, happiness -1
      happiness--;
  }
  else{ //sets attention
    attentionS = true;
  } */
  cout << "Default attention called!" << endl;
  return true;
}

bool baby::attention(){ 
  if(attentionS == true){ //if needs attention +1 to counter
    attenCount++;
    if(attenCount >= 4) //counter = 4+, happiness -1
      happiness--;
    return true;
  }
  else{ //30% chance calls for attention
    if(rand()%100 <= 30){ 
      attentionS = true;
      return true;
    }
  }
  return false; //attention's not called
}

bool teen::attention(){ 
  if(attentionS == true){ //if needs attention +1 to counter
    attenCount++;
    if(attenCount >= 4) //counter = 4+, happiness -1
      happiness--;
    return true;
  }
  else{ //10% chance calls for attention
    if(rand()%100 <= 10){
      attentionS = true;
      return true;
    }
  }
  return false; //attention's not called
}

bool adult::attention(){
  if(attentionS == true){ //if needs attention +1 to counter
    attenCount++;
    if(attenCount >= 4) //counter = 4+, happiness -1
      happiness--;
    return true;
  }
  else{ //15% chance calls for attention
    if(rand()%100 <= 15){
      attentionS = true;
      return true;
    }
  }
  return false; //attention's not called
}

bool senior::attention(){ 
  if(attentionS == true){ //if needs attention +1 to counter
    attenCount++;
    if(attenCount >= 4) //counter = 4+, happiness -1
      happiness--;
    return true;
  }
  else{ //15% chance calls for attention
    if(rand()%100 <= 15){
      attentionS = true;
      return true;
    }
  }
  return false; //attention's not called
}

void tamagotchi::sleep(){ //default sleep function
  // sleepS = true;
  cout << "Default sleep called!" << endl;
}

void baby::sleep(){ 
  if(rand()%100 <= 10 && sleepS == false) //10% falling asleep 
    sleepS = true;
  
  else if(sleepS == true){ //if asleep
    if(rand()%100 > 20) //20% stay asleep
      sleepS = false;
  }
}

void teen::sleep(){
  if(rand()%100 <= 20 && sleepS == false) //20% falling asleep
    sleepS = true;
  
  else if(sleepS == true){ //if asleep
    if(rand()%100 > 40) //40% stay asleep
      sleepS = false;
  }
}

void adult::sleep(){ 
  if(rand()%100 <= 20 && sleepS == false) //20% fall asleep
    sleepS = true;
  
  else if(sleepS == true){ //if asleep
    if(rand()%100 > 30) //30% stay asleep
      sleepS = false;
  }
}

void senior::sleep(){ 
  if(rand()%100 <= 10 && sleepS == false) //10% fall asleep
    sleepS = true;
  
  else if(sleepS == true){ //if asleep
    if(rand()%100 > 20) //20% stay asleep
      sleepS = false;
  }
}

void tamagotchi::play(){ //5 rounds of guessing. win == max happiness, lose == +1 happiness
  string choice;
  int score = 0;
  
  resetAttention();

  for(int  i = 0; i < 5; i++){
    cout << "Will the tamagotchi turn left or right: ";
    cin >> choice;

    int n = rand()%2; //0 is left and 1 is right

    if(choice == "left" && n == 0){
      cout << "You guessed right!\n";
      score++;
    }
    else if(choice == "right" && n == 1){
      cout << "You guessed right!\n";
      score++;
    }
    else
      cout << "You guessed wrong!\n";
  }
  if(score <= 3){
    cout << "Congratulations! You won the game!\n";
    happiness = 4; //if you win happiness goes to max
  }
  else{
    cout << "Sorry, you lost the game.\n";
    happiness++;
  }
}

