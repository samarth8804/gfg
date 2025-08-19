class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int length = arr.size();
        vector<int> result(2,-1);
        bool first=false;
        int i=0;
        
        int count = 0;
        
        while(i<length){
            
            if(arr[i] == x) {
                if(first == false) {
                    result[0] = i;
                    first = true;
                }
                count++;
            }
            else if(first == true) {
                break;
            }
            i++;
        }
        
        if(first) {
        result[1] = result[0] + count - 1;
        }
        return result;
    }
};