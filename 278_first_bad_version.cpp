// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

bool isBadVersion(int index){
    if(index>5)
    return true;
    return false;
}

class Solution {
public:
    int firstBadVersion(int n) {
        long long int i=1,j=n,mid;
        while(i<=j){
              mid=(i+j)/2;
            if(isBadVersion(mid)){
                if(mid>1&&!isBadVersion(mid-1))
                return mid;
            j=mid-1;   
            }
            else
            i=mid+1;
            
        }
        return mid;
    }
};