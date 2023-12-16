class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> mp;
        
        if(s.size()!= t.size()) return false;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        for(int i=0;i<t.size();i++){
            if(mp[t[i]]==0) return false;
            mp[t[i]]--;
        }
        
        return true;
        
    }
        
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         if(s.length() != t.length())
//             return false;
        
//         for(int i=0;i<s.length();i++){
            
//             if(s[i]!=t[i])
//                 return false;
//         }
//         return true;
//     }
};