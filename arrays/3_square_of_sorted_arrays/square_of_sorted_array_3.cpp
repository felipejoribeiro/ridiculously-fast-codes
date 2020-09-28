//4ms -- 127/132
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int count = 0;
        int min = 10001 * 10001;
        int min_index = 0;
        vector<int> B(A.size());
        // Square every number   
        for(int i = 0; i < A.size(); i++){
                A[i] = A[i] * A[i];
            }
        
        while(count < A.size()){
            
            // Search for the smaller number
            for(int i = 0; i < A.size(); i++){

                if( A[i] < min ){
                    min = A[i];
                    min_index = i;
                }
            }

            //Update counting
            B[count] = min;
            A[min_index] = 10001 * 10002;
            min = 10001 * 10002;
            count++; 
            
        }
        return B;
    }
};
