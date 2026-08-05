class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       // int n=strs.length();
        unordered_map<string,vector<string>>mpp;

        for(string str:strs){
            string key=str;
            sort(key.begin(),key.end());
            mpp[key].push_back(str);
        }

    vector<vector<string>>answer;

       for(auto &it:mpp){
         answer.push_back(it.second);
       }

return answer;
    }
};
