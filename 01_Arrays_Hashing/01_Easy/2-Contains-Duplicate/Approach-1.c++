/* 
    Contains Duplicate

    Steps
    1. Start with the first element `i`
    2. Compare it with every element after it `j`
    3. if nums[i] == nums[j] that means there is a duplicate so return true
    4. if no duplicates are found return false

    Description
    This solution uses brute force approach
    It checks every pair of elements to find duplicates
    This approach is not optimized and will likely cause a Time Limit Exceeded (TLE) error
    on large input sizes in platforms like LeetCode.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] == nums[j]) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	vector<int> nums = { 1,2,3,1 };
	if (containsDuplicate(nums)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	return 0;
}