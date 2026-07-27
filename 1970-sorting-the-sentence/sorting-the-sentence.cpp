class Solution {
public:
    string sortSentence(string s) {

        vector<string> ans(10);
        string word = "";

        for (int i = 0; i <= s.length(); i++) {

            if (i == s.length() || s[i] == ' ') {

                int pos = word.back() - '0'; // Get the position
                word.pop_back();             // Remove the digit
                ans[pos] = word;             // Store word at correct position
                word = "";                   // Reset for next word
            }
            else {
                word += s[i];
            }
        }

        string result = "";

        for (int i = 1; i <= 9; i++) {

            if (ans[i] != "") {

                if (!result.empty())
                    result += " ";

                result += ans[i];
            }
        }

        return result;
    }
};