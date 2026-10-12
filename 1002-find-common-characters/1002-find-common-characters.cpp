#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;

        for (char i : words[0]) {
            string temp = "";
            temp += i;
            bool found = true;

            for (int j = 1; j < words.size(); j++) {
                if (words[j].find(i) == string::npos) {
                    found = false;
                    break;
                }


                words[j].erase(words[j].find(i), 1);
            }
            if (found) {
                res.push_back(temp);
            }
        }
        return res;
    }
};
