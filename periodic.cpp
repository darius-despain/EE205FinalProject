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
