class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int prefix_sum = 0;
        unordered_map<int,int> mp;
        mp[0] = -1;
        int length = 0;
        
        for(int i = 0;i<arr.size();i++) {
            
            prefix_sum += arr[i];
            
            if(prefix_sum == k) {
                length = max(length,i+1);
            }
            else if(mp.count(prefix_sum - k)) {
                length = max(length,i - mp[prefix_sum - k]);
            }
            
            if(!mp.count(prefix_sum)) {
                mp[prefix_sum] = i;
            }
        }
        
        return length;
    }
};