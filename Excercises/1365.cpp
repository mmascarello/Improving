/*Given a string s and an integer array indices of the same length.
The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
Return the shuffled string.*/

string restoreString(string s, vector<int>& indices) {
    
    int size = indices.size();
    vector<char> sort (size,'x');
    
    
    for (int i = 0; i < size; i++){
        sort[indices[i]]=s[i]; 
    }
    
    string answer(sort.begin(), sort.end());
            
    return answer;
}

