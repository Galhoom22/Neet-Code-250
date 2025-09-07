/*
    Concatenation of Array: https://neetcode.io/problems/concatenation-of-array?list=neetcode250

    Steps
    1. Let `n` be the length of `nums`
    2. Create an array `ans` of size `2 * n`
    3. For `i` from `0` to `n - 1`:
    - Set `ans[i] = nums[i]`
    - Set `ans[i + n] = nums[i]`
    4. Return `ans`

    Description
    This pseudocode creates a new array `ans` with double the length of `nums`, 
    where the first half is a copy of `nums`, 
    and the second half is another copy of `nums`. This effectively concatenates the array with itself.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2 * n);
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
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