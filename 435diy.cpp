#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](const vector<int> &i1, const vector<int> &i2)
    {
        if (i2[1]>i1[1])
        {
            return true;
        }
        else if (i2[1]==i1[1])
        {
            return i2[0]>i1[0];
        }
        else
        {
            return false;
        }
    });
    int count=1;
    vector<int> temp=intervals[0];
    for (auto i=intervals.begin();i!=intervals.end();i++)
    {
        if ((*i)[0]>=temp[1])
        {
            temp=*i;
            count++;
        }
    }
    return intervals.size()-count;
}

int main()
{
    vector<vector<int>> intervals={{1,2},{2,4},{1,3}};
    cout<<eraseOverlapIntervals(intervals)<<endl;
    return 0;
}