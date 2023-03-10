class Solution {
public:
    string getHint(string secret, string guess) {
       
        vector<int> num(10,0);
        
        int bulls =0;
        int cows = 0;
        
        for(int i=0;i<secret.size();i++){
            
            int s = secret[i]-'0';
            int g = guess[i]-'0';
            
            if(s==g) bulls++;
            else{
                
                if(num[s]++<0) cows++;
                if(num[g]-->0) cows++;
            }
        }
        return to_string(bulls) + "A" +to_string(cows) + "B";
    }
};
