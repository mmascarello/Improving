/*There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.
Note that multiple kids can have the greatest number of candies.*/

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    
    int max=0;
    vector<bool> answer;
    int size = candies.size();
    
    for (int i = 0; i < size; i ++) {
        max = candies[i] >= max ? candies[i] : max;
    }
    
    for (int j = 0; j < size; j++) {
        answer.push_back(candies[j] + extraCandies >= max ? true : false); 
    }
    
    return answer;
}