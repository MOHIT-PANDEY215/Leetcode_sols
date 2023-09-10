class Solution {
public:
   string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        string ans;
        int n = s.length();
        int x = 2 * numRows - 2;
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j< n; j += x) {
                ans += s[j];
                if (i != 0 && i != numRows - 1 && j + x - 2*i < n) {
                    ans += s[j + x - 2*i];
                }
            }
        }
        return ans;
    }       
};