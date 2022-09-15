class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        sort(changed.begin(),changed.end());
        map<int,int> mp;
        vector<int> ans;
        int n=changed.size();
        //if odd size
        if(n%2==1)
            return {};
        
        for(int i=0;i<n;i++){
            mp[changed[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(mp[changed[i]]==0) continue;
            if(mp[changed[i]*2]==0) return {};
            ans.push_back(changed[i]);
            mp[changed[i]]--;
            mp[changed[i]*2]--;
        }
        return ans;
        
    }
};