class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        
        int mini = INT_MAX;
        int n = arr.size();
        int left = 0,right = n-1;
        int ans;
        
        while(left<=right) {
            int mid = left + ((right-left)/2);
            
            if(arr[left]<=arr[mid]) {
                if(arr[left]<mini) {
                    mini = arr[left];
                    ans = left;
                }
                left = mid+1;
            }
            else {
                if(arr[mid]<mini) {
                    mini = arr[mid];
                    ans = mid;
                }
                right = mid-1;
            }
        }
        
        return ans;
    }
};
