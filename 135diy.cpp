#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int candy(vector<int>& ratings) {
    vector<int> can;
    int sum=0;
    can.assign(ratings.size(),1);
    int index=0;
    while (index<ratings.size()-1)
    {
        if (ratings[index]<ratings[index+1])
        {
            can[index+1]=can[index]+1;
        }
        index++;
    }
    index=ratings.size()-1;
    while (index>0)
    {
        if (ratings[index]<ratings[index-1])
        {
            if (can[index-1]<=can[index]) can[index-1]=can[index]+1;
        }
        index--;
    }
    for (int j=0;j<can.size();j++)
    {
        sum=sum+can[j];
    }
    return sum;
}

int main()
{
    vector<int> ratings={1,0,2};
    cout<<candy(ratings)<<endl;
    return 0;
}