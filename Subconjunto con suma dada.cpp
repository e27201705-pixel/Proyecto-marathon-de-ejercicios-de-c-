#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(vector<int>& nums, int suma) {
    int n = nums.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(suma + 1, false));

    for (int i = 0; i <= n; i++) dp[i][0] = true;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= suma; j++) {
            if (nums[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
        }
    }
    return dp[n][suma];
}

int main() {
    vector<int> nums = {3, 34, 4, 12, 5, 2};
    int suma = 9;
    cout << (subsetSum(nums, suma) ? "Existe un subconjunto" : "No existe subconjunto") << " con suma " << suma << endl;
    return 0;
}
