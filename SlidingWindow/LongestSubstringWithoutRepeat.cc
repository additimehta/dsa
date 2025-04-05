// time complexity: O(N^2)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int len = s.length();

        for(int left = 0; left < len; left++) {
            bool seen[128] = {false};

            for(int right = left; right < len; right++) {
                if(seen[s[right]]) {
                    break;
                } else {
                    seen[s[right]] = true;
                }

                max_len = max(max_len, right - left + 1);
            }
        }

        return max_len;
    }
};
