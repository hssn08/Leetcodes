class Solution {
public:
    bool isPalindrome(string s) {
        if(s==""){
            return false;
        }
        stack <char> pdrome;
        string pldrome;
        for(int i=0;i<s.length();i++){
            if(s[i]>=97&&s[i]<=122||s[i]>=48&&s[i]<=57){
                pdrome.push(s[i]);
                pldrome.push_back(s[i]);
            }
            if(s[i]>=65&&s[i]<=90){
                pdrome.push(s[i]+32);
                pldrome.push_back(s[i]+32);
            }
        }
        int i=0;
        while(!pdrome.empty()){
            if(pldrome[i]!=pdrome.top()){
                return false;
                }
            pdrome.pop();
            i++;
        }
        return true;
    }
};