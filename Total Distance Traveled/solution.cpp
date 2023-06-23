class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance = 0;
        int step = 0;
        while (mainTank > 0){
            mainTank-- ;
            distance = distance + 10;
            step++;
            if (step == 5 && additionalTank > 0){
                step = 0;
                additionalTank--;
                mainTank++;
            }
        }
        return distance;
    }
};
