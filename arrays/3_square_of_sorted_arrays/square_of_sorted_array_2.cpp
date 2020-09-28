// 4ms -- 129/132
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int count = 0;
        // Square every number   
        for(int i = 0; i < A.size(); i++){
                A[i] = A[i] * A[i];
            }
        
        while(count < A.size()){
            int min = 10001 * 10001;
            int min_index = 0;
            
            // Search for the smaller number
            for(int i = count; i < A.size(); i++){

                if( A[i] < min ){
                    min = A[i];
                    min_index = i;
                }
            }
            
            //Rearange array
            for(int i = min_index; i > count; i--){
                A[i] = A[i - 1];
            }
            
            A[count] = min;
            
            //Update counting
            count++; 
            
        }
        return A;
    }
};
