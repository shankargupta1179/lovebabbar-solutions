class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        
     int   max_current=0,max_ending=0;
      for(int i=0;i<n;i++)
      {
          max_ending=max_ending+arr[i];
          if(max_current<max_ending){
              max_current=max_ending;
          }
          
          if(max_ending<0){
              max_ending=0;
          }
         
      }
         return max_current;
        
    }
};
