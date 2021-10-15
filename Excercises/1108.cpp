/*You are given an m x n integer grid accounts where accounts[i][j] is 
the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank.
Return the wealth that the richest customer has.
A customer's wealth is the amount of money they have in all their bank accounts. 
The richest customer is the customer that has the maximum wealth.*/

int maximumWealth(vector<vector<int>>& accounts) {
    
    int max = 0;
    
    int rows = accounts.size();
    for(int i = 0; i < rows; i++ ) {
        int colums = accounts[i].size();
        int sum = 0;
        for(int j = 0; j < colums; j++) {
            sum += accounts[i][j];
        }
        if(sum>max) max=sum;
    }
    
    return max;
}