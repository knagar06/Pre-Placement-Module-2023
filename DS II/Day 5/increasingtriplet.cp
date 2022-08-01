class Solution {
public:
bool increasingTriplet(vector& A) {

        int n = A.size();
        
        int mn1 = A[0], mn2 = INT_MAX;
        
        for(int i  =1; i<n; i++){
                
               if(A[i]>mn2){
                        
                   return true;
                } else if(A[i]>mn1){
                        mn2 = A[i];
                } else{
                        
                        mn1 = A[i];
                }
                        
        }
    
        return false;
}
};