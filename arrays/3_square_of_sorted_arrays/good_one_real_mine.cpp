//   132 / 132
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        ios_base :: sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<int> result(A.size());
        int begin = 0;
        int end = A.size() - 1;
        int iterable = A.size() - 1;
        
        while(end>=begin){
            int x = A[begin] * A[begin];
            int y = A[end] * A[end];
            
            if( x > y ){
                result[iterable] = x;
                begin++;
                iterable--;
                
            }else{
                result[iterable] = y;
                end--;
                iterable--;
                
            }
            
        }
    
        return result;
    }
};
