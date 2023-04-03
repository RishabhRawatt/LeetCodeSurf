class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int boat=0;
        sort(people.begin(),people.end());
            
        int low=0;
        int high=people.size()-1;
        
        while(low<=high){
                if(people[low]+people[high]<=limit){
                boat++;
                    low++;
                    high--;
                }
            else if(people[low]+people[high]>limit){
                boat++;
                high--;
            }
        }
        return boat;
    }
};