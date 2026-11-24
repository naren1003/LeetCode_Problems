class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // first Solution O(n^2)
        // vector<int> result;
        // for(int i = 0;i<nums.size();i++){
        //     for(int j = i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j] == target){
        //             result.push_back(i);
        //             result.push_back(j);
        //             return result;
        //         }
        //     }
        // }
        // return result;

        // unordered_map<int,int> seen;
        // for(int i = 0;i<nums.size();i++){
        //     int remainder = target - nums[i];
        //     if(seen.count(remainder)){
        //         return {seen[remainder],i};
        //     }
        //     seen[nums[i]] = i;
        // }
        // return {};

        unordered_map<int,int> seen;
        for(int i = 0;i<nums.size();i++){
            int remainder = target - nums[i];
            if(seen.count(remainder)) return {seen[remainder],i};
            seen[nums[i]] = i;
        }
        return {};
    }
};

