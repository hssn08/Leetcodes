// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     int lower=0, upper=n, mid=0;
     while(lower<=upper){
         mid=lower+(upper-lower)/2;
         if(isBadVersion(mid)){
             upper=mid-1;
         }
         else{
         lower=mid+1;
         }
     }
     return lower;
    }
};