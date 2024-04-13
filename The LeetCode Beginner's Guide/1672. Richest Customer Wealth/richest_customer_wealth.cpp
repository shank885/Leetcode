class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max_wealth = 0;
        // int wealth = 0;

        // for(auto& customer: accounts){
        //     for(auto& account: customer){
        //         wealth += account;
        //     }
        //     max_wealth = wealth > max_wealth ? wealth : max_wealth;
        //     wealth = 0;
        // }
        for (auto &customer : accounts)
        {
            max_wealth = max(max_wealth, accumulate(customer.begin(), customer.end(), 0));
        }
        return max_wealth;
    }
};