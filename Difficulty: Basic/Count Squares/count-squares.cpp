class Solution {
  public:
    int countSquares(int n) {
        // code here
        int i = 1;
        int count = 0;
        
        while(i*i < n) {
            count++;
            i++;
        }
        
        return count;
    }
};