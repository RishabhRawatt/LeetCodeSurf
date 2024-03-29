//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
    static bool cmp(pair<double,Item>a, pair<double,Item>b){
        
        return a.first > b.first;
        
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<double,Item>> v;
        
        for(int i=0;i<n;i++){
            double perUnitValue =(1.0*arr[i].value) / arr[i].weight;
            pair<double,Item> p=make_pair(perUnitValue,arr[i]);
            v.push_back(p);
        }
        
        sort(v.begin(),v.end(),cmp);
        
        double totalValue=0;
        for(int i=0;i<n;i++){
            
            if(v[i].second.weight > W){
                //then we can only take fraction of it
                totalValue+=W*v[i].first;
                W=0;
            }
            else{
                //we can take full
                totalValue +=v[i].second.value;
                W-=v[i].second.weight;
            }
        }
        return totalValue;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends