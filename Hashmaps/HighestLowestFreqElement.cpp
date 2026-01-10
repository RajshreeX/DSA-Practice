//Highest Occurring Element in an Array:https://takeuforward.org/plus/dsa/problems/highest-occurring-element-in-an-array
//Used hashmap to find frequency then compare the frequency of each element to find the highest frequency value and return it
//T:O(n)   S:O(n)

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++) {
            map[nums[i]]++;
        }

        int maxFreq=0;
        int ans=INT_MIN;

        for(auto i:map) {
            if(i.second<maxFreq) {
                maxFreq=i.second;
                ans=i.first;
            }

        }
else if (i.second == maxFreq) {
                ans = min(ans, i.first);
            }
        }

        return ans;
    }
};