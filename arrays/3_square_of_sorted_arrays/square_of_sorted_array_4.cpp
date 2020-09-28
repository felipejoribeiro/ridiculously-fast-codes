//   130 / 132
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int count = 0;
        int min = 10001 * 10001;
        int min_index = 0;
        int max = 0;
        int max_index = 0;
        // Square every number
        for(int i = 0; i < A.size(); i++){
                A[i] = A[i] * A[i];
            }

        while(count * 2 < A.size()){
            

            // Search for the smaller number
            for(int i = count; i < A.size() - count; i++){

                if( A[i] < min ){
                    min = A[i];
                    min_index = i;
                }
                
                if( A[i] > max ){
                    max = A[i];
                    max_index = i;
                }
                
            }
            
                

            //Rearange array
            for(int i = min_index; i > count; i--){
                A[i] = A[i - 1];
            }
                
            if(max_index < min_index){max_index++;}
                
            //Rearange array, the second time
            for(int i = max_index; i < A.size() - 1 - count; i++){
                A[i] = A[i + 1];
            }

            A[count] = min;
            A[A.size() - 1 - count] = max;

            //Update counting
            count++;
            min = 10001 * 10001;
            max = -1;

        }
        return A;
    }
};
