#include<iostream>
#include<vector>
using namespace std;

void subsetsUtil(vector<int>& nums, vector<vector<int>>& result, vector<int>& subset, int index) {
	result.push_back(subset);
	for (int i = index; i < nums.size(); i++) {
		subset.push_back(nums[i]);
		subsetsUtil(nums, result, subset, i + 1);
		subset.pop_back();
	}
	return;
}
vector<vector<int>> subsets(vector<int>& nums) {

	vector<int>subset;
	vector<vector<int>>result;

	int index = 0;
	subsetsUtil(nums, result, subset, index);
	return result;
}

int main() {
	vector<int> array = { 1, 2, 3 };

	// res will store all subsets.
	// O(2 ^ (number of elements inside array))
	// because at every step we have two choices
	// either include or ignore.
	vector<vector<int> > res = subsets(array);

	// Print result
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}
	system("pause");
}