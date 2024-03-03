class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int result=0;
        for(auto x: nums){
            result^=(i+1)^x;
            i++;
        }
        return result;
    }
};