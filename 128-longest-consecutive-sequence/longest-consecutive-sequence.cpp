#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i;
        int n = nums.size();  
        int count = 1;
        int maxCount = 1;

        if(n == 0) return 0;

        sort(nums.begin(), nums.end());

        for(i = 0; i < n-1; i++) {
            if(nums[i+1] - nums[i] == 1) {   
                count++;
            }
            else if(nums[i+1] != nums[i]) {
                count = 1;
            }

            if(count > maxCount)
                maxCount = count;
        }
        return maxCount;   
    }
};
