//977. Squares of a Sorted Array: https://leetcode.com/problems/squares-of-a-sorted-array/

//Two pointer appproach
//T:O(n)    S:O(n)
vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
    vector<int> res(n);

    int left = 0, right = n - 1, pos = n - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            res[pos] = nums[left] * nums[left];
            left++;
        } else {
            res[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
    }
    return res;
    }

//Brtute force
//T:O(n^2)     S:O(1)
vector<int> sortedSquares(vector<int>& nums) {
        for (int i=0; i<nums.size();i++) {
            nums[i]=nums[i]*nums[i];
        }
        
        for (int i=0; i<nums.size()-1;i++){
            for(int j=i+1; j<nums.size(); j++) {
                if (nums[i]>nums[j]) {
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        return nums;
    }