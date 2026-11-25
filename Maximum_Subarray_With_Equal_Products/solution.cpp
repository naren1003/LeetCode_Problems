class Solution {
public:
    int maxLength(vector<int>& nums) {
        int result = 1;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            long long product = nums[i];
            int gcd = nums[i];
            long long lcm = nums[i];

            for(int j = i + 1; j < n; j++){
                if (product > LLONG_MAX / nums[j]) break;
                product *= nums[j];
                gcd = std::gcd(gcd, nums[j]);
                lcm = std::lcm(lcm, (long long)nums[j]);

                if(product == gcd * lcm){
                    result = max(result, j - i + 1);
                }
            }
        }

        return result;
    }
};