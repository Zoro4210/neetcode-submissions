class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal=INT_MAX;
        int maxProfit=INT_MIN;
        for(auto val:prices){
            minVal=min(minVal,val);
            maxProfit=max(maxProfit,val-minVal);
        }
        return maxProfit;
    }
};
