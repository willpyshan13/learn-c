//
// Created by will on 2021/10/14.
//
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int left = 1, right = n-2, pos = 0;
        while (left<= right){
            int mid = (left+right)/2;
            if(arr[mid] > arr[mid +1]){
                pos = mid;
                right = mid -1;
            }else{
                left = mid + 1;
            }
        }
        return pos;
    }
};
