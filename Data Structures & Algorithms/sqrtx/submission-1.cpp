class Solution {
public:
    int mySqrt(int x) {
        long long start=0,end=x,mid;
        int ans=0;
        while(start<=end){

            mid=(start+end)/2;
            
            if((mid*mid)>x)
                end=mid-1;
            else{
                 start=mid+1;
                 ans=mid;

            }
               
        }

        return ans; 
    }
};