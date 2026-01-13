//283. Move Zeroes: https://leetcode.com/problems/move-zeroes/description/
//Two-pointer(slow-fast pointer)
//T:O(n) S:O(1)

void moveZeroes(vector<int>& nums) {
        int slow=0;
        for(int fast=0; fast<nums.size();fast++) {
            if(nums[fast]!=0) {
                swap(nums[slow], nums[fast]);
            }
        }
    }

    //Brute force
    //T:O(n^2)    short:O(1)
    void moveZeroes(vector<int>& nums) {
        int k=nums.size()-1;
        for(int i=0; i<nums.size();i++) {
            if(nums[i]==0) {
                for(int j=i;j<nums.size();j++) {
                    nums[j]=nums[j+1];
                }
                nums[k]=0;
                i--;
                k--;
            }
        }
    }