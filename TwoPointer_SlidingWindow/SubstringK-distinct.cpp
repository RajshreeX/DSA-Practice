//Substrings with K Distinct: https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1

//Sliding Window: 
//1.I feed the array into a map
//2. i start shrinking window size from left, if freq of element on left becomes 0; i erase that element from map
//3. i count all substring ending at right as count=count+right-left+1
//4. i return count
//5. finally, i find required Substring with at most K distinct−Substrings with at most (K−1) distinct

//Time: O(n)    Space: O(k)

int countSubstrAtMost(string& s, int k) {
    unordered_map<char, int> freq;
    int left=0;
    int count=0;

    for(int right=0; right<s.size(); right++) {
        freq[s[right]]++;
        while(freq.size()>k) {
            freq[s[left]]--;
            if(freq[s[left]]==0) freq.erase(s[left]);
            left++;
        }
        count+=right-left+1;
    }
    return count;
}

int countSubstr(string& s, int k) {
    return countSubstrAtMost(s,k) - countSubstrAtMost(s, k-1);
}
