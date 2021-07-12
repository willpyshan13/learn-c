//
// Created by will on 2021/7/12.
//
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        int left = 0;
        int right = size -1;
        while(left<=right){
            int mid = left+(right -left)/2;
            if(citations[mid] >= size-mid){
                right = mid-1;
            } else{
                left =mid+1;
            }

        }
        return size - left;
    }
};
