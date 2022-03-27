#include<iostream>
#include<vector>
using namespace std;
int bisectLeft();
int main() {
	

	cout<<"The index is:"<< bisectLeft()<<endl;
	system("pause");

}
int bisectLeft()
{
	vector<int>nums = { 1,2,5,6,7,7,7,8,9,9,9 };
	int left = 0;
	int right = nums.size();
	int target = 7;
	while (left < right) {
		int middle = left + (right - left) / 2;
		if (nums[middle] < target) {
			left = middle + 1;
		}
		else
			right = middle;
	}
	return left;
}