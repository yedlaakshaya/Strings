class Solution {
public:
    void reverseString(vector<char>& s) { 
         int temp,right,left;
            right=s.size()-1;
            left=0;
        while(left<right){
           
            temp=s[left];
           s[left]=s[right];
           s[right]=temp;
           right--;
           left++;
        }
        
    }
};