/*Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".*/

string defangIPaddr(string address) {
        
    int size = address.size();
    string answer = "";
    
    for ( int i = 0; i < size ; i++){
        if(address[i] == '.'){
            answer.push_back('[');
            answer.push_back('.');
            answer.push_back(']');
        }else {
            answer.push_back(address[i]);
        }
    }
    
    return answer;
    
}