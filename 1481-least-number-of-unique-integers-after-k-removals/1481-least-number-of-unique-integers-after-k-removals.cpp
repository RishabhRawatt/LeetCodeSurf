class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        
        for(auto it:arr)
            mp[it]++;
        
        //multimap keep in order 
        // we want to sort in frequency way to we insert it.second (first)
        multimap<int,int>mm;
        for(auto it:mp){
            mm.insert({it.second,it.first});
        }
        
        int count=0;
        for(auto it=mm.begin(); it != mm.end();it++){
            k-=it->first;
            if(k<0) return mm.size()-count;
            else count++;
        }
        return 0;
    }
};