class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
       int n1=word1.size();
        int n2=word2.size();
        int i=0;
       while(i<n1 && i<n2){
        merged+=word1[i];
        merged+=word2[i];
        i++;
       }
       while(i<n1){
        merged+=word1[i];
        i++;
       }
       while(i<n2){
        merged+=word2[i];
        i++;

       }
       return merged;
    }
};