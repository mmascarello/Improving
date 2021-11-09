/*Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

Given a balanced string s, split it in the maximum amount of balanced strings.

Return the maximum amount of split balanced strings.*/

int balancedStringSplit(string s) {

    int balancer = 0;
    int amount = 0;
    
    for (auto c:s) {
        if(c =='L'){
            balancer+=1;
        }
        if(c =='R'){
            balancer-=1;
        }
        if(balancer == 0){
            amount += 1;
        }
    }
    
    return amount;
    
}
    