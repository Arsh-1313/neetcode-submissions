class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string &ch:strs){
            int len=ch.length();
            encoded+=to_string(len)+"#"+ch;
        }
        return encoded;
    }

    vector<string> decode(string s) {
         vector<string> result;
        int i = 0;

        while(i < s.length()) {
            int j = i;

        // find #
        while(s[j] != '#') {
            j++;
        }

        // get length
        int len = stoi(s.substr(i, j - i));

        // move after #
        j++;

        // extract actual string
        string word = s.substr(j, len);

        result.push_back(word);

        // move pointer to next encoded string
        i = j + len;
    }

    return result;
    }
};
