class Solution {
public:
//     vector<vector<string>> ans;
//     bool issafe(int r,int c,vector<string>&v,int n){
	
// 		for(int i=0;i<=r;i++){
// 			if(v[i][c]=='Q') return false;
// 		}
		
// 		int row=r,col=c;
// 		while(row>=0 && col>=0){
// 			if(v[row][col]=='Q') return false;
// 			row--,col--;
// 		}
// 		row=r,col=c;
// 		while(row>=0 && col<n){
// 			if(v[row][col]=='Q') return false;
// 			row--,col++;
// 		}
// 		return true;
// 	}
	void helper(int col,vector<string> &board,vector<vector<string>> &ans,vector<int> &leftrow,vector<int> &lowerdiagonal,vector<int> &upperdiagonal,int n){
		 if(col==n){
			 ans.push_back(board);
			 return;
		 }
        
		for(int row=0;row<n;row++){  
			if(leftrow[row]==0 && lowerdiagonal[row+col]==0 && upperdiagonal[n-1+col-row]==0){
				board[row][col]='Q';
                leftrow[row]=1;
                lowerdiagonal[row+col]=1;
                upperdiagonal[n-1+col-row]=1;
				helper(col+1,board,ans,leftrow,lowerdiagonal,upperdiagonal,n);
				board[row][col]='.';
                leftrow[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[n-1+col-row]=0;
				
			}
		}
	}
	vector<vector<string>> solveNQueens(int n) {
        vector<int>leftrow(n,0);
        vector<int>lowerdiagonal(2*n-1,0);
        vector<int>upperdiagonal(2*n-1,0);
        
        vector<vector<string>>ans;
		vector<string> board;
		string s(n,'.');
		for(int i=0;i<n;i++) board.push_back(s);
		helper(0,board,ans,leftrow,lowerdiagonal,upperdiagonal,n);
		return ans;
	}
};
    