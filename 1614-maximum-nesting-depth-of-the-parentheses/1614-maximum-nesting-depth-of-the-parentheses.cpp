class Solution {
public:
    int maxDepth(string s) {
        int count =0;
        int str;
        int max=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            count++;
            if(max<count){
             max=count;
            }
        }
        else if(s[i]==')'){
            count--;

        }
       
       }
        return max;
    }
};