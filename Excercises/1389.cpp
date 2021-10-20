/*Given two arrays of integers nums and index. Your task is to create target array under the following rules:

Initially target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.

It is guaranteed that the insertion operations will be valid.*/

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

    int size = index.size();
    vector<int> answer;
    
    for (int i = 0 ; i < size ; i++) {
        auto it = answer.insert(answer.begin() + index[i], nums[i]);
    }
    
    return answer;
}