/*You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. You are also given a rule represented by two strings, ruleKey and ruleValue.

The ith item is said to match the rule if one of the following is true:

ruleKey == "type" and ruleValue == typei.
ruleKey == "color" and ruleValue == colori.
ruleKey == "name" and ruleValue == namei.
Return the number of items that match the given rule.*/

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    
    
    map <string,int> key = {{"type", 0}, {"color", 1}, {"name", 2}};
    
    int match = 0;
    
    for (auto item : items) {
        if(item[key[ruleKey]] == ruleValue) {
            match ++;
        }
    }
    
    return match;
}
    