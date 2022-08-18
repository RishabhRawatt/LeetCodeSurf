class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        map<int,int> freq;
        
        // for(int i=0;i<n)
            
        // by &c we gave the refrence of char so we can get index 
     for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        
       vector<int> nas;
        int n=nas.size();
        
        for(auto it : freq){
            nas.push_back(it.second);
        }
        
        int elements=0;
        int ans=1;
        sort(nas.begin(),nas.end());
        

        for(int i=nas.size()-1;i>=0;i--){
            
            elements+=nas[i];
            // cout<<elements<<" ";
            
            if(elements>=arr.size()/2){
                return ans;
            }
            
            ans++;
            
            
        }
    return 0;
    }
};