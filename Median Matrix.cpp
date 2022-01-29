
int countMid(int val,vector<int>&matrix){
    int low=0;int hi=matrix.size()-1;
    int len;
    while(low<=hi){
        int mid = low+ (hi-low)/2;
        if(matrix[mid]<val){
            len = mid+1;
            low = mid+1;
            
        }
        else hi = mid-1;
    }
    return len;
}
int Solution::findMedian(vector<vector<int> > &matrix) {
     int n = matrix.size();int m = matrix[0].size();
    int low=0;
    int hi = INT_MAX;
    int ans;
    while(low<=hi){
        int mid = (low) + (hi-low)/2;
        int count = 0;
        for(int i=0;i<n;i++){
            count+=countMid(mid,matrix[i]);
        }
        
        if(count<=(n*m)/2){
            low = mid+1;
            ans = mid;
                
        }
        else{
            hi = mid-1;
        }
    }
        return ans;

}
