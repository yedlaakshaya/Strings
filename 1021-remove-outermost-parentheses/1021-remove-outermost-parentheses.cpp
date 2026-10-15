class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int count=0;
        int start=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            if(count==0){
                res+=s.substr(start+1,i-start-1);
                start=i+1;
            }
        }
        return res;
    }
};