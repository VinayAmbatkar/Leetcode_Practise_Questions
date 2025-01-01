class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0;
        
        // Count total number of '1's in the string
        for (char c : s) {
            if (c == '1') totalOnes++;
        }
        
        int leftZeros = 0, rightOnes = totalOnes, maxScore = 0;

        // Iterate through the string, excluding the last character
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == '0') {
                leftZeros++; // Increment left zeros
            } else {
                rightOnes--; // Decrement right ones
            }

            // Calculate the current score and update maxScore
            maxScore = max(maxScore, leftZeros + rightOnes);
        }

        return maxScore;
    }
};
