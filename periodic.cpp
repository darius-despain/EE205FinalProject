#include "tamagotchi.h"

void tamagotchi::run(){ //tests if tamagotchi needs to run
  return;
}

void egg::run(){ //tests if tamagotchi needs to run
  return;
}
void baby::run(){ //tests if tamagotchi needs to run
  //check if it needs to run
  if(happiness <= 0){
    if(runCount == 5) {
      runS = true;
      return;
    }
    //otherwise increment counter
    runCount++;
  }
  return;
}
void teen::run(){ //tests if tamagotchi needs to run
  //check if it needs to run
  if(happiness <= 0){
    if(runCount == 5) {
      runS = true;
      return;
    }
    //otherwise increment counter
    runCount++;
  }
  return;
}
void adult::run(){ //tests if tamagotchi needs to run
  //check if it needs to run
  if(happiness <= 0){
    if(runCount == 5) {
      runS = true;
      return;
    }
    //otherwise increment counter
    runCount++;
  }
  return;
}

void senior::run(){ //tests if tamagotchi needs to run
  //check if it needs to run
  if(happiness <= 0){
    if(runCount == 5) {
      runS = true;
      return;
    }
    //otherwise increment counter
    runCount++;
  }
  return;
}

void tamagotchi::evolve() {
  return;
}

void egg::evolve() {
  if(eggCount >= 3){
    evoS = true;
    formS++;
    return;
  }
  else{
    eggCount++;
  }
}

void baby::evolve(){
  if(weight >= 7){
    evoS = true;
    formS++;
    return;
  }
}

void teen::evolve(){
  if(weight >= 15){
    evoS = true;
    formS++;
    return;
  }
}

void adult::evolve(){
  if(weight >= 30){
    evoS = true;
    formS++;
    return;
  }
}

void senior::evolve(){
  if(weight >= 50) {
    evoS = true;
    formS++;
    return;
  }
}
