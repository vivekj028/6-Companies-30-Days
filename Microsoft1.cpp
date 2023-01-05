class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <long int> st;
        for(auto t: tokens){
            cout<<t<<endl;
            if(t=="+"|| t=="-" || t=="*" || t=="/" ){
                long int x=st.top();
                st.pop();
                long int y=st.top();
                st.pop();
                if(t=="+"){
                    long int temp=x+y;
                    st.push(temp);
                }
                if(t=="-"){
                    int temp=y-x;
                    st.push(temp);
                }
                if(t=="*"){
                    long int temp=x*y;
                    st.push(temp);
                }
                if(t=="/"){
                    long int temp=y/x;
                    st.push(temp);
                }
            }
            else st.push(stoi(t));
        }
        return st.top();
    }
};