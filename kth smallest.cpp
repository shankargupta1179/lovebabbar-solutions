class Solution{
    public:
    
    int kthSmallest(int arr[], int l, int r, int k) {
        //driver code was already provided by gfg....This is just the function
        sort(arr,arr+(r+1));
        return arr[k-1];
    }
};
