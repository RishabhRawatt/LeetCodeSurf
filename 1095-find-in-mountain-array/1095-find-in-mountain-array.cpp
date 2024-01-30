/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    
    //simple logic 
    //find peek index then implement binary search left half
    // if found return else again binary search (decreasing) on second half
    
    int peekIndexMountainArray(MountainArray &mountainArr){
        
        int n=mountainArr.length();
        
        int l=0;
        int r=n-1;
        
        while(l<r){
            int mid=l+(r-l)/2;
            
            
            if(mountainArr.get(mid) < mountainArr.get(mid+1))
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
    
    
    int binarySearch(MountainArray &mountainArr ,int l,int r,int target){
        
        while(l<=r){
            int mid=l+(r-l)/2;
            
            
            if(mountainArr.get(mid) == target)
                return mid;
            else if(mountainArr.get(mid) < target)
                l=mid+1;
            else
                r=mid-1;
        }
        return -1;
    }
    
    
    int reverseBinarySearch(MountainArray &mountainArr, int l,int r,int target){
        
        while(l<=r){
            int mid=l+(r-l)/2;
          
            
            if(mountainArr.get(mid)==target)
                return mid;
            else if(mountainArr.get(mid) < target) // go left
                r=mid-1;
            else 
                l=mid+1;
        }
        return -1;
    }
    
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        
        //get peak value
        int idx=peekIndexMountainArray(mountainArr);
        
        //binary search left side (0 to idx)
        int result_idx=binarySearch(mountainArr,0,idx,target);
        
        if(result_idx != -1){
            return result_idx;
        }
        
        // find in right side(this is in decreasing keep in mind)
        result_idx=reverseBinarySearch(mountainArr,idx,n-1,target);
        
        return result_idx;
        
    }
};