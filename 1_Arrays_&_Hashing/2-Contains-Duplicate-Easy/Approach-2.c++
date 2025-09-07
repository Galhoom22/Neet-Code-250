/*
    Contains Duplicate: https://neetcode.io/problems/duplicate-integer?list=neetcode250
    
	Steps
	1. sort the array nums
	2. loop through from the first element to the second to last element
	3. in each step compare the current element with the next element
	4. if nums[i] == nums[i+1] return true
	5. else return false

    Description
    This solution sorts the array first, then checks for duplicates by comparing each element with its next neighbor. If any two consecutive elements are equal, the function returns true. Otherwise, it returns false.

    Time Complexity: O(n log n)
    Space Complexity: O(log n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	for (int i = 0; i < static_cast<int>(nums.size()) - 1; i++) {
		if (nums[i] == nums[i + 1]) {
			return true;
		}
	}
	return false;
}

int main() {
	vector<int> nums = { 1,2,3,1 };
	if (containsDuplicate(nums)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	return 0;
}