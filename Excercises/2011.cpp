/*There is a programming language with only four operations and one variable X:

++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.*/

int finalValueAfterOperations(vector<string>& operations) {
    
    int x = 0;
    
    for ( auto operation : operations ) {
        if(operation[1] == '+') {
            x += 1;
        }
        if(operation[1] == '-') {
            x -= 1;  
        }
    }
    
    return x;
    
}
