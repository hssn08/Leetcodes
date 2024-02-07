class Solution {
public:
    bool isValid(string s) {
        std::stack<char> par;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                par.push(s[i]);
            }
            else{
            if(par.empty()==1){
                return false;
            }
            else{
            if(s[i]==')'){
                if (par.top()!='('){
                return false;
                }
                par.pop();
            }
            else if(s[i]=='}'){
                if (par.top()!='{'){
                return false;
                }
                par.pop();
            }
            else if(s[i]==']'){
                cout<<"motherfucker";
                if (par.top()!='['){
                return false;
                }
                par.pop();
            }
            }
            }
            
        }
        if(par.empty()==1){
            return true;
        }
        return false;
    }
};