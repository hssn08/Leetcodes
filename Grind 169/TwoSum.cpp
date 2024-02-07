
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> umap;

        for(int i=0;i<nums.size();i++){
            if(umap.find(target-nums[i])!=umap.end()){
                     return{umap[target-nums[i]],i};
            }
               umap[nums[i]]=i;
           
        }
        return{};
    }
};
