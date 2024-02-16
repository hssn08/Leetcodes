class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length()==1){
            return 1;
        }
        unordered_map <char, int> meow;
        for(char x: s){
            meow[x]++;
            
        }
        int m=0;
        bool flag=false;
        for(auto key: meow){
            if(key.second%2==0){
                m+=key.second;
            }
            else{
                flag=true;
                m+=key.second-1;
            }
        }
        if(flag==true)
        return m+1;

        return m;
    }
};