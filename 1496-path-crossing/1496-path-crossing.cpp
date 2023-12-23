class Solution {
public:
    bool isPathCrossing(string path) {
        
        set<pair<int,int>> st;
        int x=0;
        int y=0;
        
        st.insert({0,0});
        
        for(int i=0;i<path.size();i++){
            if(path[i]=='N') x++;
            else if(path[i]=='S') x--;
            else if(path[i]=='E') y++;
            else if(path[i]=='W') y--;
            
            if(st.find({x,y})==st.end()){
                st.insert({x,y});
            }
            else 
                return true;
        }
        
    return false;
        
    }
};