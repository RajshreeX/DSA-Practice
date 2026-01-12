//Find Largest element in an array: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
//compare each element and update the variable that contains current max element every time a larger element is encountered
//T:O(n)    S:O(1)

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max)
            max=arr[i];
            
        }
        return max;
    }
};
