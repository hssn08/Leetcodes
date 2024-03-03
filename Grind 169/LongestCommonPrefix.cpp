class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        if (v.empty()) {
            return "";
        }

    string ans="";
    sort(v.begin(),v.end());
  
    string one=v[0], last=v[v.size()-1];
    for(int i=0;i<min(one.size(),last.size());i++){
        if(one[i]!=last[i]){
           return ans;
        }
        ans+=last[i];
    }
    return ans;
    }
};