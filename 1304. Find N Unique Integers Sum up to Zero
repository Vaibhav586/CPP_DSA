class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        int i = 0, elem = 1;
        while (i+1 < n){
            arr[i]=elem;
            arr[i+1]=-elem;
            elem++;
            i+=2;
        }
        return arr;
    }
};
