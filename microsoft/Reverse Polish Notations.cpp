class Solution {
public:
    int evalRPN(vector<string>& t) {
       stack<int> st;
    for(auto s:t) {
        if(s.size()>1 || isdigit(s[0])) st.push(stoi(s));
        
        else {
            auto a=st.top(); st.pop();
            
            auto b=st.top(); st.pop();
            
            
            switch(s[0]) {
                case '+': b+=a; break;
                case '-': b-=a; break;
                case '*': b*=a; break;
                case '/': b/=a; break;
            }
            st.push(b);
        }
    }
    return st.top();

    }
};  
// loop through each element, when it is a number push it to the stack 
//  when any operator arrives pop two numbers and do the calculation specifically 
// and push the result
// at last top element is the result of the final expressiion
