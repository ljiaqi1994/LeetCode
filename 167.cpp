#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0, r = numbers.size() - 1, sum;
    while (l < r) {
        sum = numbers[l] + numbers[r];
        if (sum == target) break;
        if (sum < target) ++l;
        else --r;
    }
    return vector<int>{l + 1, r + 1};
}

int main()
{
    vector<int> numbers={2,7,11,15};
    int target=9;
    cout<<twoSum(numbers,target)[0]<<","<<twoSum(numbers,target)[1]<<endl;
    return 0;
}