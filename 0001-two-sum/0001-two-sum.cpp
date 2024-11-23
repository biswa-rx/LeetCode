class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pair(2);
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    pair.at(0)=i;
                    pair.at(1)=j;
                }
            }
        }
        return pair;
    }
};
