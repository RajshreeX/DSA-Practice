//Check Prime Number: https://www.geeksforgeeks.org/problems/prime-number2314/1?page=1&category=Prime%20Number&sortBy=submissions
//check if n is dividible by any number from 2 to n/2. If yes, return false, else true.
//T:O(n)     S:O(1)  

bool isPrime(int n) {
        // code here
        if(n==1) return false;
        for(int i=2; i<=n/2; i++){
            if(n%i==0) {
                return false;
            }
        }
        return true;
    }