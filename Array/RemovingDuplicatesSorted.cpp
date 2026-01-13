//26.Remove Duplicates from Sorted Array: https://leetcode.com/problems/remove-duplicates-from-sorted-array/



//Two pointer approach
//T:O(n)    S:O(1)
int removeDuplicates(vector<int>& nums) {
    int j=1;
    for(int i=1; i<nums.size(); i++) {
        if(nums[i]!=nums[i-1]) {
            nums[j]=nums[i];
            j++;
        }
    }
    return j;
}

//Bruteforce approach
//T:O(n^2)    S:O(1)
int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (nums[i] == nums[j]) {
                for (int k = j; k < n - 1; k++) {
                    nums[k] = nums[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    return n;
    }