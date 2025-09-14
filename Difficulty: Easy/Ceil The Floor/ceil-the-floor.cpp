// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int low = 0, high = n-1;
        int floor = -1,ceil = -1;
        
        while(low<=high) {
            
            int mid = low + ((high-low)/2);
            
            if(arr[mid] == x) {
                floor = mid;
                low = mid+1;
            }
            else if(arr[mid] > x) {
                high = mid-1;
            }
            else {
                floor = mid;
                low = mid+1;
            }
        }
        
        
        if(floor == -1) {
            ceil = 0;
            return {-1,arr[ceil]};
        }
        else if(arr[floor] == x) {
            ceil = floor;
            return {arr[floor],arr[ceil]};
        }
        else if(floor == n-1) {
            ceil = -1;
            return {arr[floor],-1};
        }
        else {
            ceil = floor + 1;
            return {arr[floor],arr[ceil]};
        }
        
    }
};