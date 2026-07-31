class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> V;
         
        for(int i=0; i<n; i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                V.push(s[i]);

            }else{

            if (V.empty()) return false;
            char ch = V.top();

            if ((s[i] == ')' && ch == '(') || (s[i] == '}' && ch == '{') || 
            (s[i] == ']' && ch == '[')){
                V.pop();
            }
            else{
                return false;
            }            
            }
        }
        return V.empty();     
        
    }
};
