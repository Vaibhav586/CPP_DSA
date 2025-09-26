class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(10); 
        string word;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {                
                int pos = s[i] - '0';           
                v[pos] = word;                  
                word = "";                      
                i++;                            
            } else {
                word += s[i];
            }
        }

        string ans;
        for (int i = 1; i < v.size(); i++) { 
            if (!v[i].empty()) {
                ans += v[i] + " ";
            }
        }
        if (!ans.empty()) ans.pop_back();
        return ans;
    }
};
