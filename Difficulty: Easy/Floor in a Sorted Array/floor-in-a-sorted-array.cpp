class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        
        int n = arr.size();
        
        if(x<arr[0]) {
            return -1;
        }
        else if(x>arr[n-1]) {
            return n-1;
        }
        
        for(int i = n-1;i>=0;i--) {
            if(arr[i]<=x) {
                return i;
            }
        }
        
    }
};
