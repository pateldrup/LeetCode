class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> ans;

        if (intervals.empty())
            return ans;

        sort(intervals.begin(), intervals.end());

        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {

            int currentStart = intervals[i][0];
            int currentEnd = intervals[i][1];

            int lastEnd = ans.back()[1];

            if (currentStart <= lastEnd) {

                ans.back()[1] = max(lastEnd, currentEnd);
            }
            else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};