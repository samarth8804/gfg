class Solution {
  public:
    double minMaxDist(vector<int> &stations, int K) {
        // Code here
        int n = stations.size();
        
        double left = 0;
        double right = 0;
        double ans;
        
        for(int i=0;i<n-1;i++) {
            right = max(right,double(stations[i+1]-stations[i]));
        }
        
        while(right - left > 1e-6) {
            double mid = (left+right)/2.0;
            
            int station = 0;
            
            for(int i=0;i<n-1;i++) {
                
                station = station + int(ceil((double(stations[i+1]-stations[i])/mid) - 1));
            }
            
            if(station<=K) {
                right = mid;
            }
            else {
                left = mid;
            }
        }
        
        return right;
    }
};