/*Given an array nums. We define a running sum of an array as
runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.*/

vector<int> runningSum(vector<int>& nums) {
      
    int current_sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        current_sum+=nums[i];
        nums[i]=current_sum;
    }
    
    return nums;
}