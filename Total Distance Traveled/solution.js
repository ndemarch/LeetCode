/**
 * @param {number} mainTank
 * @param {number} additionalTank
 * @return {number}
 */
var distanceTraveled = function(mainTank, additionalTank) {
    
    let distance = 0;
    let step = 0;

    while (mainTank > 0) {
      distance += 10;
      mainTank -= 1;
      step += 1;

      if (step === 5 && additionalTank > 0) {
        step = 0;
        mainTank += 1;
        additionalTank -= 1;
      }
    }

    return distance;
  };
