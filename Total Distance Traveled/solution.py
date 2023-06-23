class Solution:
    def distanceTraveled(self, mainTank: int, additionalTank: int) -> int:
        distance = 0
        step = 0
        while mainTank > 0:
            distance += 10
            mainTank -= 1
            step += 1
            if step == 5 and additionalTank > 0:
                step = 0
                mainTank += 1
                additionalTank -= 1
        return distance
