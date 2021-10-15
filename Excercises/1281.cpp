/*We are given a list nums of integers representing a list compressed with run-length encoding.
Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.
Return the decompressed list.*/

vector<int> decompressRLElist(vector<int>& nums) {
    
    vector<int> answer (0,0);
    
    for(int i = 0 ; i < nums.size() ; i+=2 ){
        int toInsert = nums[i+1];
        int times = nums[i];
        answer.insert(answer.end(),times,toInsert);
        
    }
    
    return answer;
}

