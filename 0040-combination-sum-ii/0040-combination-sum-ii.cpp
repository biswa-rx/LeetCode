
//MY

class Solution {
public:
	vector<vector<int>> ans;
    void solve(int index, vector<int>& candidates, vector<int>& cur, int target) {
		int n = candidates.size();
		if(target == 0) {
			ans.push_back(cur);
			return;
		}

		for (int i = index; i < n; i++) {
			if(i > index && candidates[i] == candidates[i-1]) {
				continue;
			}
			if(candidates[i] > target) {
				break;
			}

			cur.push_back(candidates[i]);
			solve(i + 1, candidates, cur, target - candidates[i]);
			cur.pop_back(); //backtrack
		}
	}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		sort(candidates.begin(),candidates.end());
		vector<int> cur;
		solve(0, candidates, cur, target);
		return ans;
    }
};