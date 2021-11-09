/*Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.*/

int numberOfSteps(int num) {
    
    int steps =0;
    countSteps(num,steps);
    
    return steps;
}

void countSteps(int num, int& steps){
    if (num > 0) {
        steps +=1;
        num % 2 == 0 ? countSteps((num / 2), steps) : countSteps((num - 1), steps);
    }
}
