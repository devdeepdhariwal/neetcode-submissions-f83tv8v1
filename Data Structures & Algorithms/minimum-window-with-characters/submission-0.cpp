class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty()) {
            return "";
        }

        unordered_map<char, int> required;
        unordered_map<char, int> current;

        
        for (char ch : t) {
            required[ch]++;
        }

        int requiredChars = required.size();
        int matchedChars = 0;

        int left = 0;
        int bestStart = 0;
        int bestLength = INT_MAX;

        for (int right = 0; right < s.length(); right++) {
            char ch = s[right];
            current[ch]++;

           
            if (required.count(ch) &&
                current[ch] == required[ch]) {
                matchedChars++;
            }

            
            while (matchedChars == requiredChars) {
                int windowLength = right - left + 1;

                if (windowLength < bestLength) {
                    bestLength = windowLength;
                    bestStart = left;
                }

                char leftChar = s[left];
                current[leftChar]--;

                
                if (required.count(leftChar) &&
                    current[leftChar] < required[leftChar]) {
                    matchedChars--;
                }

                left++;
            }
        }

        if (bestLength == INT_MAX) {
            return "";
        }

        return s.substr(bestStart, bestLength);
    }
};