// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
         if(a>b) {
             if(b>c) {
                 return b;
             }
             else if(a>c) {
                 return c;
             }
             else {
                 return a;
             }
         }
         else {
             if(a>c) {
                 return a;
             }
             else if(b>c) {
                 return c;
             }
             else {
                 return b;
             }
         }
    }
};