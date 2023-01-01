class Solution {
    
  private:
    
    void solve(int i,int n,int k,vector<int>temp,vector<vector<int>> &ans){
        
        if(n==0 && k==0){
            ans.push_back(temp);
        return;
        }
        
        if(n<0 || k<0) return;
    
        if(i==10) return;
    
    solve(i+1,n,k,temp,ans); // skipping the element
    
    temp.push_back(i);
    
    solve(i+1,n-i,k-1,temp,ans); // picking the element 
    temp.pop_back();
    }
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        
        vector<int> temp;
        
        solve(1,n,k,temp,ans);
        return ans;
    }
};

// hamare pas do choice hai ya to element ko le ya to na le 
// to jab skip karenge to i ko bhadayenge aur jab pick karenge phir bhi i ko bhadayenge taki same number na add ho jaye....
