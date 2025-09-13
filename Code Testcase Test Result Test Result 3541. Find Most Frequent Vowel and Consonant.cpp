class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
            }
            int vMax = 0, cMax = 0;
            string vowels = "aeiou";
            
            for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            int f = freq[i];

            if (vowels.find(c) != string::npos) {
                vMax = max(vMax, f);
            } else {
                cMax = max(cMax, f);
            }
        }

        return vMax + cMax;
    }
};
