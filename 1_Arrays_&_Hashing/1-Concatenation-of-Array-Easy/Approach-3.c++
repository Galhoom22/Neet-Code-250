/*
    Concatenation of Array: https://neetcode.io/problems/concatenation-of-array?list=neetcode250

    Steps
    1. Let `n` be the length of `nums`
    2. Create an array `ans` of size `2 * n`
    3. Use `copy(nums.begin(), nums.end(), ans.begin())` to copy the first part
    4. Use `copy(nums.begin(), nums.end(), ans.begin() + n)` to copy the second part
    5. Return `ans`

    Description
    This pseudocode leverages the C++ Standard Library function `std::copy` to create a new array `ans` that is a concatenation of `nums` with itself.
    The first `n` elements of `ans` are filled directly from `nums`,
    and the next `n` elements are also copied from `nums`,
    starting at index `n`. This approach is efficient, concise, and showcases modern C++ practices.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm> // for std::copy

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
	int n = nums.size();
	vector<int> ans(2 * n);
	copy(nums.begin(), nums.end(), ans.begin());
	copy(nums.begin(), nums.end(), ans.begin() + n);
	return ans;
}

int main() {
    vector<int> nums = { 1, 4, 1, 2 };
    vector<int> result = getConcatenation(nums);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}