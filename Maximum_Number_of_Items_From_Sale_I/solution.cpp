
class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {

        int n = items.size();

        vector<int> dp(budget + 1, 0);

        int minPrice = INT_MAX;

        for(int i = 0; i < n; i++) {

            int factor = items[i][0];
            int price = items[i][1];

            minPrice = min(minPrice, price);
            int cnt = 0;

            for(int j = 0; j < n; j++) {
                if(items[j][0] % factor == 0) {
                    cnt++;
                }
            }

            for(int j = budget; j >= price; j--) {
                dp[j] = max(dp[j], dp[j - price] + cnt);
            }
        }

        int result = 0;

        // Use remaining budget to buy cheapest items
        for(int i = 0; i <= budget; i++) {
            result = max(result,
                dp[i] + (budget - i) / minPrice);
        }

        return result;
    }
};



// class Solution {
// public:
//     void backtrack(vector<int>& price, vector<int>& copies,
//                    vector<bool>& visited, int& result,
//                    int budget, int sum, int temp) {

//         result = max(result, temp);
//         for(int i = 0; i < price.size(); i++) {
//             if(sum + price[i] <= budget) {
//                 sum += price[i];
//                 temp++;
//                 bool added = false;
//                 if(!visited[i]) {
//                     temp += copies[i];
//                     visited[i] = true;
//                     added = true;
//                 }
//                 backtrack(price, copies, visited, result,
//                           budget, sum, temp);
//                 if(added) {
//                     temp -= copies[i];
//                     visited[i] = false;
//                 }
//                 temp--;
//                 sum -= price[i];
//             }
//         }
//     }

//     int maximumSaleItems(vector<vector<int>>& items, int budget) {
//         vector<int> price, copies;
//         for(auto& item : items) {
//             price.push_back(item[1]);
//         }

//         for(int i = 0; i < items.size(); i++) {
//             int copy = 0;
//             for(int j = 0; j < items.size(); j++) {
//                 if(i != j && items[j][0] % items[i][0] == 0)
//                     copy++;
//             }
//             copies.push_back(copy);
//         }
//         vector<bool> visited(items.size(), false);
//         int result = 0;
//         backtrack(price, copies, visited, result,
//                   budget, 0, 0);

//         return result;
//     }
// };