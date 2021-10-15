/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.*/

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
    int size = nums.size();
    vector<int> aux (101,0); // mem: constant
    vector<int> answer; //mem n
    vector<int> sorted; //mem n
    
    for (int i = 0; i < size; i++) { //O(n)
        sorted.push_back(nums[i]);    
    }

    sort(sorted.begin(),sorted.end()); //O(nlogn)
    
    
    for (int i = size-1; i >= 0; i--) { //O(n)
        if(i-1>=0 && sorted[i]>sorted[i-1]){
            aux[sorted[i]]=i;
        }
    }
    
    for(int i = 0; i < size; i ++) { //O(n)
        answer.push_back(aux[nums[i]]);
    }
    
    return answer;
    
}

