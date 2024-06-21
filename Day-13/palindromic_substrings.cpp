class Solution {
public:
        int expand(string s, int i, int j){
        int count = 0;

        // Jab tak substring palindrome ho tab tak me count increase karunga 
        // other wise loop  rok doonga
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
         int totalCount = 0;
        int center = 0;

        while(center<s.length()){

            // Step 01: ODD 
            int oddCount = expand(s,center,center);

            // Step 02: EVEN
            int evenCount = expand(s,center,center+1);

            // Step 03: Total Count
            totalCount = totalCount + oddCount + evenCount;

            // Increase center
            center++;
        }
        // Return totalCount
        return totalCount;

    }
};