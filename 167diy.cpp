#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int& target) {
    vector<int> idx(2);
    for (auto p1=numbers.begin();p1!=numbers.end();p1++)
    {
        for (auto p2=p1;p2!=numbers.end();p2++)
        {
            if ((*p1+*p2)>target)
            {
                break;
            }
            if ((*p1+*p2)==target)
            {
                idx[0]=p1-numbers.begin()+1;
                idx[1]=p2-numbers.begin()+1;
                return idx;
            }
        }
    }
}

int main()
{
    vector<int> numbers={2,7,11,15};
    int target=9;
    cout<<twoSum(numbers,target)[0]<<","<<twoSum(numbers,target)[1]<<endl;
    return 0;
}