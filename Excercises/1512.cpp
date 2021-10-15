/*You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
Letters are case sensitive, so "a" is considered a different type of stone from "A".*/

int numJewelsInStones(string jewels, string stones) {
    int jewelsSize = jewels.size();
    int stonesSize = stones.size();
    int stonesAndJewels = 0;
    
    for (int i = 0; i < jewelsSize; i++) {
        for(int j = 0; j < stonesSize; j++ ) {
            if(jewels[i]==stones[j]){
                stonesAndJewels++;
                stones.erase(j,0);
            }
        }
    }
    return stonesAndJewels;
}