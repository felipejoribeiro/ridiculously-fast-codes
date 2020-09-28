class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        ios_base :: sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int size = A.size();
        vector<int> re = A;
        if (size < 0) return re;
        
        int l = 0;
        int r = size - 1;
        int c = r;
        
        while (l <= r) {
            if (abs(A[l]) > abs(A[r])) { re[c] = A[l]*A[l]; l++; }
            else { re[c] = A[r]*A[r]; r--; }
            c--;
        }
        
        return re;
    }
};
