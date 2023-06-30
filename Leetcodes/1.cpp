#include <iostream>
using namespace std;

class Solution {
public: 
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;

        for (int i = 0; i < size(nums); i++) {
            for (int j = i; j < size(nums); j++) {
                if((nums[i] + nums[j] == target) && (i != j)) {
                    output.push_back(i);
                    output.push_back(j);
                }
            }
        }
        return output;
    }
};