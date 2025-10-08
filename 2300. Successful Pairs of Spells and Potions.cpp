class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end()); // Sort potions for binary search
        int m = potions.size();
        vector<int> res;

        for (long long spell : spells) {
            long long need = (success + spell - 1) / spell; // Minimum potion needed to reach success
            int idx = lower_bound(potions.begin(), potions.end(), need) - potions.begin();
            res.push_back(m - idx); // Count of successful potions
        }

        return res;
    }
};
