class Solution {
public:
    
    bool static comp(vector<int> &a , vector<int> &b){
        return a[1]<b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        
        
        //sort on basis of 2nd element
        sort(courses.begin(),courses.end(),comp);
        
        //if no course
        if(courses.size() <=0 )return 0;
        
        // so the max element is stay at top
        priority_queue<int> pq;
        int sum=0;
        for(auto i: courses){
            
            sum+= i[0];
            pq.push(i[0]);
            
            //if sum is exceeds then last date then just pop
            if(sum > i[1]){
                sum = sum-pq.top();
                pq.pop();
            }
            
        }
        
        //at last just return size that will be equal to no of course taken
        return pq.size();
    }
};