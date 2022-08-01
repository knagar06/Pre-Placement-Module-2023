class Solution {
public:
   int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        if (intervals.size() <= 1) return 0;
        int _max = intervals[0][1], count = 0;
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] >= _max) {
                _max = intervals[i][1];
            }
            else {
                count++;
                _max = min(_max, intervals[i][1]);
            }
        }
        return count;
    }
};