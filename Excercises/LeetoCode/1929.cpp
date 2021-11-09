/* Given a zero-based permutation nums (0-indexed), build an array ans of the same length where
ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).*/

vector<int> buildArray(vector<int>& nums) {
    
    int size = nums.size();
    
    vector<int> answer (size);
    
    for (int n = 0; n < size; n ++){
        answer[n] = nums[ nums[n] ];
    }
    
    return answer;    
}