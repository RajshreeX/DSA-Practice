int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int maxLen=0;
        int sum=0;
        int i=0; int j=0;
        while(j<n){
            sum+=arr[j];
            if(sum>k) {
                while (sum > k){
                    sum-=arr[i];
                    i++;
                    maxLen=max(maxLen, j-i+1);
                }  
            }
            
            j++;
            maxLen=max(maxLen,j-i+1);
        }
        return maxLen;
    }
