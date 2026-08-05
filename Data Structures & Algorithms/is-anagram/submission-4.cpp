class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_length=s.length();
        int t_length=t.length();
         if(s_length!=t_length) return false;

         vector<int>count(256,0);

         for(int i=0;i<s_length;i++){
            count[s[i]]++;
            count[t[i]]--;
         }
       
       for(int i=0;i<count.size();i++){
        if(count[i]!=0) return false;
       }
return true;
    }
};
