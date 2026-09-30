class Solution {
public:
    string removeDuplicates(string s, int k) {

        string res;
        vector<int> count;

        for(char ch : s) {

            res.push_back(ch);

            if(res.size() == 1 || res.back() != res[res.size() - 2]) {
                count.push_back(1);
            }
            else {
                count.push_back(count.back() + 1);
            }

            if(count.back() == k) {

                for(int i = 0; i < k; i++) {
                    res.pop_back();
                    count.pop_back();
                }
            }
        }

        return res;
    }
};