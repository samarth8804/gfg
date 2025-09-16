class Solution {
    
  private : 
    void countTar(vector<int> &arr,int left,int right,int target,int &count) {
        
        if(left>right) {
            return;
        }
        else {
            int mid = left + ((right-left)/2);
            if(arr[mid] == target) {
                count++;
                countTar(arr,left,mid-1,target,count);
                countTar(arr,mid+1,right,target,count);
            }
            else if(arr[mid] > target) {
                countTar(arr,left,mid-1,target,count);
            }
            else {
                countTar(arr,mid+1,right,target,count);
            }
        }
    }
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
         
        int count = 0;
        
        int left = 0,right = arr.size() - 1;
        
        countTar(arr,left,right,target,count);
        
        return count;
    }
};
