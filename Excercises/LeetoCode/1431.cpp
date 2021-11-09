/*Given an array of integers nums, return the number of good pairs.
A pair (i, j) is called good if nums[i] == nums[j] and i < j.*/

int numIdenticalPairs(vector<int>& nums) {
    int identicalPairs = 0;
    int size = nums.size();
    
    for(int i = size-1; i >= 0; i--) {
        for( int j = size-1; j > i; j--){
            if(nums[i]==nums[j]){
                identicalPairs++;
            }
        }
    }
    return identicalPairs;
}