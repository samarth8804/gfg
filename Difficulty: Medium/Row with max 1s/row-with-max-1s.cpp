// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        int m = arr[0].size();
        int max_cnt = -1;
        int index = -1;

        for(int i=0;i<n;i++) {

            int left = 0,right = m-1;
            int idx = m;

            while(left<=right) {

                int mid = (left+right)/2;

                if(arr[i][mid] == 1) {
                    idx = mid;
                    right = mid-1;
                }
                else {
                    left = mid+1;
                }
            }

            int cnt = m - idx;

            if(cnt>max_cnt) {
                max_cnt = cnt;
                index = i;
            }
        }

        return index;
    }
};