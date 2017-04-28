void run(){ //tests if tamagotchi needs to run
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
    switch(formS){
      case(0):
        if(eggCount >= 3){ evoS = true; formS++; return; }
        else{ eggCount++;}
      case(1):
        if(weight >= 7){evoS = true; formS++; return;}
      case(2):
        if(weight >= 15){evoS = true; formS++; return; }
      case(3):
        if(weight >= 30){evoS = true; formS++; return;}
      case(4):
        if(weight >= 50) {evoS = true; formS++; return;}
      default: evoS = false;
      return;
    }
}
