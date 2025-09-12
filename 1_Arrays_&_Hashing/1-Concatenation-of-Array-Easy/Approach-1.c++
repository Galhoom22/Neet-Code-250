/*
	Concatenation of Array: https://neetcode.io/problems/concatenation-of-array?list=neetcode250

	* This is the brute force approach

	Steps
	1. Create an empty array called `ans`
	2. For each element in `nums`:
		- Add it to `ans`
	3. For each element in `nums` again:
		- Add it to `ans`
	4. Return `ans`

	Description
	This pseudocode creates a new array by duplicating the contents of `nums` and appending them together in order.

	Time Complexity: O(n)
	Space Complexity: O(n)

	Example:
	Input: nums = [1,2,1]
	Output: [1,2,1,1,2,1]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
	vector<int> ans;
	for (int i = 0; i < nums.size(); i++) {
		ans.push_back(nums[i]);
	}
	for (int i = 0; i < nums.size(); i++) {
		ans.push_back(nums[i]);
	}
	return ans;
}

int main() {
	vector<int> nums = { 1,2,1 };
	vector<int> result = getConcatenation(nums);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	return 0;
}