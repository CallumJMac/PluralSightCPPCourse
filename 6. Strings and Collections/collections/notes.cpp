#include <vector>
using std::vector;

vector<int> nums;

nums.push_back(3);

for(auto item: nums)
{
    cout << item << " ";
}

nums[0]=7;
