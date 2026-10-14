#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       sort(strs.begin(),strs.end());
       string first=strs[0];
       string last=strs[strs.size()-1];
       string res="";
       for(int i=0;i<first.size() && i<last.size() ;i++){
        if(first[i]!=last[i]){
             break;
        }
        res=res+first[i];
       }
       return res;
    }
};