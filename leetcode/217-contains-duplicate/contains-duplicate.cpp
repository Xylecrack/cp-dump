class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hashMap;
        for(auto &it:nums){
            if(hashMap[it]==1){
                return true;
            }
            hashMap[it]++;
        }
        return false;
    }
};