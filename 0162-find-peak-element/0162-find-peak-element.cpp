class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int low=0 , high=n-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(arr[mid]<arr[mid+1]) // increasing curve 
            low=mid+1; // peak on right side
            else
            high=mid; // either mid is peak or else peak on left side 
        }
       return low;
    }
};

//  for(int i=0;i<n;i++){
//             if(((i==0) || arr[i-1]<arr[i])&&
//             ((i==n-1) || arr[i]>arr[i+1]))
//             return i;
//         }
//         return -1;