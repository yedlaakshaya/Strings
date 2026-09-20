class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        int n = s.size();
        int wordLen = words[0].size();
        int wordCount = words.size();

        unordered_map<string, int> freq;

        for (string word : words) {
            freq[word]++;
        }

        for (int start = 0; start < wordLen; start++) {

            int left = start;
            int count = 0;

            unordered_map<string, int> seen;

            for (int right = start; right + wordLen <= n; right += wordLen) {

                string word = s.substr(right, wordLen);

                if (freq.find(word) == freq.end()) {
                    seen.clear();
                    count = 0;
                    left = right + wordLen;
                    continue;
                }

                seen[word]++;
                count++;

                while (seen[word] > freq[word]) {
                    string remove = s.substr(left, wordLen);
                    seen[remove]--;
                    left += wordLen;
                    count--;
                }

                if (count == wordCount) {
                    ans.push_back(left);

                    string remove = s.substr(left, wordLen);
                    seen[remove]--;
                    left += wordLen;
                    count--;
                }
            }
        }

        return ans;
    }
};