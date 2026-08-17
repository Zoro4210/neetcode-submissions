class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> st(26,0);
        for(auto ch:s){
            st[ch-'a']++;
        }
        for(auto ch:t){
            st[ch-'a']--;
        }
        for(auto ch:st){
            if(ch!=0){
                return false;
            }
        }
        return true;
    }
};
