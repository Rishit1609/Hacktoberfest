class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minv=INT_MAX;
        int maxp=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            minv=min(minv,prices[i]);
            int p=prices[i]-minv;
            maxp=max(maxp,p);
        }
        return maxp;
    }
};
int main() {
  int arr = {3,6 4,5,9,1,7};
  Solution s;
  cout << s.maxProfit(arr);
  return 0;
}
