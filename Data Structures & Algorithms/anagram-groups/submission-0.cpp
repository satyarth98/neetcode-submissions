class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        //use an arr, then find using the freq. as by using array as key
        vector<vector<string>> ans;

        map<vector<int>, vector<string>> mp;

        for(int i = 0; i<n ; i++){

            vector<int> freq(26,0);
            for(auto ch : strs[i]){
                freq[ch- 'a']++;
            }

            mp[freq].push_back(strs[i]);
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;

    }
};
