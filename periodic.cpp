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

bool tamagotchi::form() {
    switch(formS){
      case(0):
        if(eggCount >= 3) return true;
      case(1):
        if(weight >= 7) return true;
      case(2):
        if(weight >= 15) return true;
      case(3):
        if(weight >= 30) return true;
      case(4):
        if(weight >= 50) return true;
      default: return false;
    }
}
