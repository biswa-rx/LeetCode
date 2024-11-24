class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 1) {
            return;
        }
        bool flag = true;
        for(int i = nums.size()-2; i >=0 ; i--) {

            if(nums[i] >= nums[i+1]) {
                continue;
            }else{
                int index = i+1;
                for(int j = i+1; j<nums.size();j++) {
                    if(nums[i] < nums[j] and nums[j] < nums[index]) {
                        index = j;
                    }
                }
                swap(nums[i],nums[index]);
                sort(nums.begin() + i + 1, nums.end());
                flag = false;
                break;
            }

            
        }

        if(flag) {
            sort(nums.begin(),nums.end());
        }
    }
};