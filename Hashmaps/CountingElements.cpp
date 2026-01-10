//Counting Elements in an Array: https://takeuforward.org/plus/dsa/problems/counting-frequencies-of-array-elements
//unordered_map is used to count the frequecy of each element as order is not important and function returns a 2D matrix with eash element in format[element,frequency]
//T:O(nlogn)    S:O(n)

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int, int> mp;
    vector<vector<int>> res;

    // Count frequencies
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    // Build result
    for (auto &i : mp) {
        res.push_back({i.first, i.second});
    }

    return res;
}
};