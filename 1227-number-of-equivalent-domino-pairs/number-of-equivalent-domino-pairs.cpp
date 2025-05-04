class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count = 0;
        int freq[100] = {0};  // There are at most 100 different normalized domino values

        for (const auto& d : dominoes) {
            int a = min(d[0], d[1]);
            int b = max(d[0], d[1]);
            int key = a * 10 + b;

            count += freq[key];  // Each previously seen equivalent domino forms a new pair
            freq[key]++;
        }

        return count;
    }
};
