#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                if(abs(i-m[nums[i]])<=k)
                    return true;
            }
            m[nums[i]]=i;
        }
        return false;
    }
};
int main() {
  vector<int> nums = {1,2,3,1};
  int k = 2;
  Solution s;
  cout << s.containsNearbyDuplicate(nums,k);
  return 0;
}
