#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) {
        return 0;
    }
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
        return a[1] < b[1];
    });
    int total = 0, prev = intervals[0][1];
    for (int i = 1; i < n; ++i) {
        if (intervals[i][0] < prev) {
            ++total;
        } else {
            prev = intervals[i][1];
        }
    }
    return total;
}

int main()
{
    vector<vector<int>> intervals={{1,2},{2,4},{1,3}};
    cout<<eraseOverlapIntervals(intervals)<<endl;
    return 0;
}