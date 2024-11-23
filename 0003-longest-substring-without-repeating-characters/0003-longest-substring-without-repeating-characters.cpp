class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = INT_MIN;
        int currentMax = 0;
        int tail = -1;
        int arr[500] = {0};
        for(int i = 0;i<s.length();i++){
            if(arr[s[i]] != 0){
                while(arr[s[i]] != 0){
                    tail++;
                    arr[s[tail]]--;
                }
                arr[s[i]]++;
                result = max(result, i - tail);
            }else {
                arr[s[i]]++;
                result = max(result, i - tail);
            }
        }
        return result==INT_MIN?0 : result;
    }
};