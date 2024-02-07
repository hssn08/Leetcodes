class Solution {
public:
    bool isAnagram(string s, string t) {
        int alpha[26] = {0};
        for(int i=0;i<s.length();i++)
        {
            alpha[s[i]-'a'] += 1;    
        }
        for(int i=0;i<t.length();i++)
        {
            int index = t[i] - 'a';
            if(!alpha[index])
            {
                return 0;
            }
            else
            {
                alpha[index]--;
            }
        }
     
        return 1;
    }
};