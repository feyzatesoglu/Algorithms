#include<iostream>
#include<vector>
using namespace std;
int findMiddleIndex(vector<int>& nums);
int main() {
	vector<int>nums = { 2,3,-1,8,4,10,15};
	cout<<findMiddleIndex(nums)<<endl;
	system("pause");
}
int findMiddleIndex(vector<int>& nums) {

	for (int i = 0; i < nums.size(); i++) {
		int right = 0;
		int left = 0;
		int middleIndex = i;
		for (int j = 0; j < i; j++) {
			right += nums[j];
		}
		for (int j = i + 1; j <nums.size(); j++) {
			left += nums[j];
		}
		if (left == right) {
			return middleIndex;
		}
	}
}