// User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find
int Search(vector<int> vec, int K) {
    // code here
    for(int i=0;i<vec.size();i++) {
        if(vec[i] == K) {
            return i;
        }
    }
    
    return -1;
}