void insertionSort(vector<int>& arr) {
        // code here
        for(int i=0; i<arr.size(); i++) {
            int curr=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>curr) {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=curr;
        }
    }
